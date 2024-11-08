/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:24:00 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 16:03:08 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) {
	this->_type = type;
	// std::cout << "AMateria default constructor created " << this->_type << std::endl;
}

AMateria::~AMateria( void ) {
	// std::cout << "AMateria destructor called for " << this->_type << std::endl;
}

AMateria::AMateria( const AMateria &src ) : _type(src._type) {
	// std::cout << "AMateria copy constructor created " << this->_type << std::endl;
}

AMateria &AMateria::operator=( const AMateria &rhs ) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	// std::cout << "AMateria copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria default use on" << target.getName() << std::endl;
}
