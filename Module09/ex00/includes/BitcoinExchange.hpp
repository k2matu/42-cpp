/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/16 10:56:41 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <array>
#include <iostream>
#include <map>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <fstream>

class BitcoinExchange {
	private:
		std::map<std::string, float> _csv;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		
		bool processData(const std::string &str);
		bool processInput(const std::string &str);
		
		bool validateDate(std::string date);
		bool validateValue(std::string &value);

		// Exceptions
		class NegativeNumberException: public std::exception {
			public:
				virtual const char* what() const noexcept {
					return "Error: not a positive number.";
				}
		};

		class BadInputException: public std::exception {
			public:
				virtual const char* what() const noexcept {
					return "Error: bad input => ";
				}
		};
		
		class OverflowException: public std::exception {
			public:
				virtual const char* what() const noexcept {
					return "Error: too large a number.";
				}
		};
		
		
};



