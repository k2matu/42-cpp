/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 02:28:14 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal default constructor created " << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called for " << this->_type << std::endl;
}

Animal::Animal( const Animal &src ) : _type(src._type) {
	std::cout << "Animal copy constructor created " << this->_type << std::endl;
}

Animal &Animal::operator=( const Animal &rhs ) {
	if (this != &rhs ) {
		this->_type = rhs._type;
	}
	std::cout << "Animal copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal make sound" << std::endl;
}

std::string Animal::getType() const {
	return (this->_type);
}
