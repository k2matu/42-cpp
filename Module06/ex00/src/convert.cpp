/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:51:11 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/19 15:20:52 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isChar(const std::string &value) {
	if (value.length() == 1 && std::isprint(value[0])) {
		return (true);
	}
	return (false);
}

void	isIntegerPart(const std::string &value, size_t &i) {
	if (value[i] == '-' || value[i] == '+')
		i++;
	while (i < value.length() && std::isdigit(value[i]))
		i++;
}

bool isDecimalPart(const std::string &value, size_t &i) {
	if (value[i] != '.')
		return (false);
	i++;
	size_t start = i;
	while (i < value.length() && std::isdigit(value[i]))
		i++;
	return (i > start);
}

std::string	validateType(const std::string &value) {
	size_t i = 0;
	
	isIntegerPart(value, i);
	if (i == value.length())
		return ("int");
	if (!isDecimalPart(value, i))
		return ("invalid");
	if (i == value.length())
		return ("double");
	if (value[i] == 'f' && i + 1 == value.length())
		return ("float");
	return ("invalid");
}

std::variant<std::monostate, char, int, float, double> convertType(const std::string &value, const std::string &type) {
	try {
		if (type == "char")
			return (value[0]);
		else if (type == "int")
			return (std::stoi(value));
		else if (type == "double")
			return (std::stod(value));
		return (std::stof(value));
	} catch (...) {
		if (type == "float") {
			try {
				return (std::stod(value));
			} catch (...) {
				return (std::monostate{}); 
			}
		return (std::monostate{}); 
	}}
}

void ScalarConverter::convert(const std::string &value) {
	std::string	type;

	if (value == "nan" || value == "-inf" || value == "+inf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: ";
		for (size_t i = 0; i < value.length(); i++) {
			std::cout << value[i];
		}
		std::cout << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
	
	if (value == "nanf" || value == "-inff" || value == "+inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << std::endl;
		std::cout << "double: ";
		for (size_t i = 0; i < value.length() - 1; i++) {
			std::cout << value[i];
		} 
		std::cout << std::endl;
		return ;
	}
	
	std::size_t found = value.find_first_not_of("-0123456789.f");
	if (found != std::string::npos) {
		if (isChar(value)) {
			type = "char";
		} else {
			type = "invalid";
		}
	}
	type = validateType(value);
	std::cout << type << std::endl;
	if (type == "invalid") {
		std::cout << "invalid" << std::endl;
		return ;
	} 
	auto v = convertType(value, type);
	std::visit([](auto &&arg) {
	std::cout << "Value: " << arg << "\n";
	}, v);
}