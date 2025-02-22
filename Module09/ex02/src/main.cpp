/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/22 07:31:07 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void displayBefore(char **str) {
	std::cout << "Before:";
	for (int i = 1; str[i]; i++) {
		std::cout << " " << str[i];
	}
	std::cout << std::endl;
}

bool isValid(char **str) {
	for (int i = 1; str[i]; i++) {
		for (int j = 0; str[i][j]; j++) {
			if (!isdigit(str[i][j])) {
				std::cerr << "Error" << std::endl;
				return false;
			}
		}
	}
	return (true);
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	if (!isValid(argv)) { return 1; }
	displayBefore(argv);

	PmergeMe *m = new PmergeMe();
	m->fordJohnsonSortVector(argv + 1);
	m->fordJohnsonSortDeque(argv + 1);
	
	return 0;
}