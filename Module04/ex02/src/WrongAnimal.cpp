/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 00:47:49 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal default constructor created " << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called for " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) : _type(src._type) {
	std::cout << "WrongAnimal copy constructor created " << this->_type << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &rhs ) {
	if (this != &rhs ) {
		this->_type = rhs._type;
	}
	std::cout << "WrongAnimal copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}
