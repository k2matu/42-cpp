/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:04:02 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/16 10:56:33 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Orthodox Canonical Form
BitcoinExchange::BitcoinExchange() {
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
	std::cout << "Destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) 
	: _csv(src._csv) {
	std::cout << "Copy constructor called" << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	if (this != &rhs) {
		this->_csv = rhs._csv;
	}
	std::cout << "Copy assignment constructor called" << std::endl;
	return *this;
}

bool BitcoinExchange::processData(const std::string &str) {
	std::ifstream file(str);
	if (!file.is_open()) {
		return false;
	}
	
	std::string line, date, value;
	getline(file, line);
	while (getline(file, line)) {
		auto pos = line.find(',');
		if (pos == std::string::npos) {
			return false;
		}
	
		date = line.substr(0, pos);
		value = line.substr(pos + 1);
		_csv.insert({date, std::stof(value)});
	}

	file.close();
	return true;
}

bool BitcoinExchange::processInput(const std::string &str) {
	std::ifstream file(str);
	if (!file.is_open()) {
		return false;
	}
	
	std::string line;
	getline(file, line);
	while (getline(file, line)) {
		std::istringstream ss(line);
		std::string date, dash, value;
		if (!(ss >> date >> dash >> value) || dash != "|") {
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		} else if (!validateDate(date)) {
			std::cout << "Error: not a valid date" << std::endl;
			continue ;
		} else if (!validateValue(value)) {
			continue ;
		} else {
			auto it = _csv.upper_bound(date);
			if (it == _csv.begin()) {
				std::cout << date << " => " << value << " = 0" << std::endl;
			} else {
				it--;
				float total = std::stof(value) * it->second;
				std::cout << date << " => " << value << " = " << total << std::endl;
			}
		}
	}

	file.close();
	return true;
}

bool isDigit(const std::string &str) {
	return !str.empty() && std::all_of(str.begin(), str.end(), [](unsigned char c)	{ return std::isdigit(c); });
}


bool BitcoinExchange::validateDate(std::string date) {
	std::istringstream ss(date);
	std::array<std::string, 3> tokens;
	std::string token;
	int i = 0;

	while (getline(ss, token, '-')) {
		tokens.at(i) = token;
		i++;
	}

	if (i != 3)
		return false;
	
	// Validate YYYY-MM-DD
	if ((tokens.at(0).length() != 4 || !isDigit(tokens.at(0))) ||
		(tokens.at(1).length() != 2 || !isDigit(tokens.at(1))) ||
		(tokens.at(2).length() != 2 || !isDigit(tokens.at(2)))) {
			return false;
		}

	int year = std::stoi(tokens[0]);
	int month = std::stoi(tokens[1]);
	int day = std::stoi(tokens[2]);
	
	if (month < 1 || month > 12)
		return false;
	
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		daysInMonth[1] = 29;
	
	if (day < 1 || day > daysInMonth[month - 1])
		return false;
	
	return true;
}

bool BitcoinExchange::validateValue(std::string &value) {
	float i;

	try {
		i = stof(value);
	} catch (...) {
		std::cout << "Error: not a valid value." << std::endl;
		return false;
	}
	
	if (i < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	if (i > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}