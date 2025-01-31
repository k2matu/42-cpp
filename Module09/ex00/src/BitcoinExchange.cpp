/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:04:02 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/31 18:37:39 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinChange::BitcoinChange() {
	std::cout << "Default constructor called" << std::endl;
}

BitcoinChange::~BitcoinChange() {
	std::cout << "Destructor called" << std::endl;
}

BitcoinChange::BitcoinChange(const BitcoinChange &src) 
	: _input(src._input), _csv(src._csv) {
	std::cout << "Copy constructor called" << std::endl;
}

BitcoinChange &BitcoinChange::operator=(const BitcoinChange &rhs) {
	if (this != &rhs) {
		this->_input = rhs._input;
		this->_csv = rhs._csv;
	}
	std::cout << "Copy assignment constructor called" << std::endl;
	return *this;
}

void BitcoinChange::addLine(std::string &str, int mode) {
	(mode == 0 ? _input : _csv).push_back(str);
}