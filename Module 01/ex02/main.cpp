/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:44:53 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 20:57:37 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "Memory address of the string variable: " << &var << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << var << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
