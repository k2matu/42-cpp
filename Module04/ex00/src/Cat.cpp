/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	this->_type = "Cat";
	std::cout << "Cat default constructor created " << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called for " << this->_type << std::endl;
}

Cat::Cat( const Cat &src ) : Animal( src ) {
	std::cout << "Cat copy constructor created " << this->_type << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs ) {
		Animal::operator=(rhs);
	}
	std::cout << "Cat copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}