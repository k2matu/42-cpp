/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/31 18:27:55 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <vector>
#include <iostream>

class BitcoinChange {
	private:
		std::vector<std::string> _input;
		std::vector<std::string> _csv;
	public:
		BitcoinChange();
		~BitcoinChange();
		BitcoinChange(const BitcoinChange &src);
		BitcoinChange &operator=(const BitcoinChange &rhs);
		
		void addLine(std::string &str, int i);
		int findExchangeRate(std::string &date);
		
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



