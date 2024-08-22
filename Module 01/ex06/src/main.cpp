/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:13:41 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/22 14:43:34 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

enum Param {
	DEBUG, INFO, WARNING, ERROR, UNKNOWN
};

Param stringToParam(const std::string &str) {
	if (str == "DEBUG") {
		return (DEBUG);
	}
	if (str == "INFO") {
		return (INFO);
	}
	if (str == "WARNING") {
		return (WARNING);
	}
	if (str == "ERROR") {
		return (ERROR);
	}
	return (UNKNOWN);
}

int	main( int argc, char **argv ) {
	Harl h;
	
	if (argc < 2) {
		std::cerr << "Missing a parameter" << std::endl;
		return (1);
	}
	
	Param input = stringToParam(argv[1]);
	switch (input) {
		case DEBUG:
		{
			std::cout << "[ DEBUG ]" << std::endl;
			h.complain("DEBUG");
		}
		case INFO:
		{
			std::cout << "[ INFO ]" << std::endl;
			h.complain("INFO");
		}
		case WARNING:
		{
			std::cout << "[ WARNING ]" << std::endl;
			h.complain("WARNING");
		}
		case ERROR:
		{
			std::cout << "[ ERROR ]" << std::endl;			
			h.complain("ERROR");
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	
	return (0);
}
