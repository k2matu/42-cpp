/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:12:02 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 09:28:24 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void ) {
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;
	
	std::cout << "The memory address of the string variable " << &var << std::endl;
	std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable " << var << std::endl;
	std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
	return (0);
}