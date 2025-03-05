/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/12 13:53:03 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	
	RPN *r = new RPN();
	
	if (!r->executeMath(argv[1])) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	
	delete r;
	return 0;
}
