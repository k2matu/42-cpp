/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:51:11 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/17 12:19:19 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int countDot(const std::string &str) {
	int dot = 0;
	
	for (char c : str) {
		if (c == '.')
			dot++;
	}
	return dot;
}

static int countF(const std::string &str) {
	int f = 0;
	
	for (char c : str) {
		if (c == 'f')
			f++;
	}
	return f;
}

static bool isFullNumber(const std::string &str) {
	size_t i = 0;
	while (i < str.size()) {
		if (str[i] == '.')
			break ;
		i++;
	}
	i++;
	while (i < str.size()) {
		if (str[i] != '0' && str[i] != 'f')
			return false;
		i++;
	}
	return true;
}

static bool isValid(const std::string &str) {
	if (str.find_first_not_of("01234567890.f-+") != std::string::npos)
		return false;

	for (size_t i = 0; i < str.length(); i++) {
		if (i != 0 && (str[i] == '-' || str[i] == '+'))
			return false;
	}

	if (countDot(str) > 1 || countF(str) > 1 || (countF(str) == 1 && (str.back() != 'f' || countDot(str) != 1)))
		return false;
	return true;
}

static void printImpossible() {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

static void convertChar(const int value) {
	if (value >= 0 && value <= 127) {
		char c = static_cast<char>(value);
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: impossible" << std::endl;
	}
}

static void convertInt(const double value) {
	if (value >= std::numeric_limits<int>::lowest() && 
		value <= std::numeric_limits<int>::max()) {
		int n = static_cast<int>(value);			
		std::cout << "int: " << n << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}
}

static void convertDouble(const double value, const std::string str) {
	if (countDot(str) == 0 || isFullNumber(str))
		std::cout << "double: " << value << ".0" << std::endl;
	else 
		std::cout << "double: " << value << std::endl;
}

static void convertion(const double value, const std::string str) {
	convertChar(value);
	convertInt(value);
	if (countDot(str) == 0 || isFullNumber(str))
		std::cout << "float: " << value << ".0f" << std::endl;
	else 
		std::cout << "float: " << value << "f" << std::endl;
	convertDouble(value, str);
}


static bool convertPseduoLiterals(const std::string str) {
	if (str == "-inf" || str == "+inf" || str == "nan") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return true;
	}

	if (str == "-inff" || str == "+inff" || str == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl;
		return true;
	}
	return false;
}

static bool isChar(const std::string str) {
	if (str.length() == 1 && (str[0] < '0' || str[0] > '9')) {
		convertChar(str[0]);
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl; 
		return true;
	}
	return false;
}

void ScalarConverter::convert(const std::string &str) {
	if (convertPseduoLiterals(str))
		return ;
	
	if (isChar(str))
		return ;
		
	if (!isValid(str)) {
		printImpossible();
		return ;
	}
	
	try {
		if (countDot(str) == 1) {
			if (countF(str) == 1) {
				float f = std::stof(str);
				convertion(f, str);
				return ;
			}
			double d = std::stod(str);
			convertion(d, str);
		} else {
			int i = std::stoi(str);
			convertion(i, str);
		}
	} catch (...) {
		try {
			float f = std::stof(str);
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << f << std::endl;
			std::cout << "double: " << f << std::endl;
		} catch (...) {
			try {
				double d = std::stod(str);
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: " << d << std::endl;
			} catch (...) {
				printImpossible();
			}
		}
	}
}