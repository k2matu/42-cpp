/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	this->_type = "Dog";
	std::cout << "Dog default constructor created " << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called for " << this->_type << std::endl;
}

Dog::Dog( const Dog &src ) : Animal( src ) {
	std::cout << "Dog copy constructor created " << this->_type << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {
	if (this != &rhs ) {
		Animal::operator=(rhs);
	}
	std::cout << "Dog copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}
