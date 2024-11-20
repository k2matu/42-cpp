/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor created" << std::endl;
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter &src ) {
	(void)src;
	std::cout << "ScalarConverter copy constructor created " << std::endl;
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs ) {
	if (this != &rhs ) {}
	std::cout << "ScalarConverter copy assignment operator created" << std::endl;
	return (*this);
}
