/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:55:08 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/21 13:05:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replace_str(std::string line, std::string erase, std::string replace) {
	size_t	index = 0;
	size_t	erase_length = erase.length();

	while (index != std::string::npos) {
		index = line.find(erase);
		if (index == -1)
			break ;
		line.erase(index, erase_length);
		line.insert(index, replace);
	}
	return (line);
}

int	main(int argc, char **argv) {
	std::string line;
	std::string fileEnd = ".replace";

	if (argc != 4) {
		std::cout << "Input a filename and 2 strings" << std::endl;
		return (1);
	}
	std::ifstream fileIn(argv[1]);
	if (!fileIn.is_open()) {
		std::cerr << "Failed to open the infile." << std::endl;
		return (1);
	}
	std::string outfile = argv[1] + fileEnd;
	std::ofstream fileOut(outfile, std::ios::app);
	if (!fileOut.is_open()) {
		std::cerr << "Failed to open the outfile." << std::endl;
		return (1);
	}
	while (std::getline(fileIn, line)) {
		line = replace_str(line, argv[2], argv[3]);
		fileOut << line << std::endl;
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
