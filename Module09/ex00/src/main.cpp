/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/31 18:39:54 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

bool openFile(BitcoinChange *b, const char *name, int mode) {
	std::string line;
	
	std::ifstream file(name);
	if (!file.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		return false;
	}

	while (getline (file, line)) {
		std::cout << line << std::endl;
		b->addLine(line, mode);
	}
	file.close();
	return true;
}

int main(int argc, char* argv[]) {
	BitcoinChange *b = new BitcoinChange();

	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	
	if (!openFile(b, argv[1], 0) || !openFile(b, "includes/data.csv", 1))
		return 1;
	
	delete b;
	return (0);
}