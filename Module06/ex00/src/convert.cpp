/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:51:11 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/14 14:16:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int hasDot(const std::string &str) {
	int dot = 0;
	
	for (char c : str) {
		if (c == '.') {
			dot++;
		}
	}
	return dot;
}

static bool isValid(const std::string &str) {
	int f = 0;
	int dot = hasDot(str);

	for (char c : str) {
		if (c == 'f') {
			f++;
		}
	}

	if (dot > 1 || f > 1)
		return false;
	return true;
}

static void convertChar(const int value) {
	if (value >= std::numeric_limits<char>::lowest() && 
		value <= std::numeric_limits<char>::max()) {
		char c = static_cast<char>(value);
		if (std::isprint(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
	}
}

void ScalarConverter::convert(const std::string &str) {
	if (str == "-inf" || str == "+inf" || str == "nan") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}

	if (str == "-inff" || str == "+inff" || str == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;

		std::string temp = str;
		temp.pop_back();
		std::cout << "double: " << temp << std::endl;
		return ;
	}
	
	try {
		double value;
		if (str.length() == 1) {
			convertChar(str[0]);
			value = static_cast<double>(str[0]);
		} else {
			if (isValid(str) && str.find_first_not_of("01234567890.f") == std::string::npos)
				value = std::stod(str);
			else
				throw std::runtime_error("Invalid");
			convertChar(value);
		}

		if (value >= std::numeric_limits<int>::lowest() && 
			value <= std::numeric_limits<int>::max() 
			&& !std::isnan(value) && !std::isinf(value)) {
			int n = static_cast<int>(value);			
			std::cout << "int: " << n << std::endl;
		} else {
			std::cout << "int: impossible" << std::endl;
		}

		if (value >= std::numeric_limits<float>::lowest() && 
			value <= std::numeric_limits<float>::max()) {
			float n = static_cast<float>(value);
			if (hasDot(str) == 0)
				std::cout << "float: " << n << ".0f" << std::endl;
			else 
				std::cout << "float: " << n << "f" << std::endl;
		} else {
			std::cout << "float: impossible" << std::endl;
		}
		
		if (hasDot(str) == 0)
			std::cout << "double: " << value << ".0" << std::endl;
		else 
			std::cout << "double: " << value << std::endl;
	} catch (...) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}