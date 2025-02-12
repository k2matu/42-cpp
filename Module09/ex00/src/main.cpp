/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/12 11:47:07 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	BitcoinExchange *b = new BitcoinExchange();
	
	if (!b->processData("includes/data.csv")) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	
	if (!b->processInput(argv[1])) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	
	delete b;
	return (0);
}