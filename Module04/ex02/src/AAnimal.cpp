/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 21:08:19 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "AAnimal default constructor created " << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &src ) : _type(src._type) {
	std::cout << "AAnimal copy constructor created " << this->_type << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &rhs ) {
	if (this != &rhs ) {
		this->_type = rhs._type;
	}
	std::cout << "AAnimal copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

std::string AAnimal::getType() const {
	return (this->_type);
}
