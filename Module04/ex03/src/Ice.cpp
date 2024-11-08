/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:16:44 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 16:19:02 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
	// std::cout << "Ice default constructor created " << this->_type << std::endl;
}

Ice::~Ice( void ) {
// 	std::cout << "Ice destructor called for " << this->_type << std::endl;
}

Ice::Ice( const Ice &src ) : AMateria(src) {
	// std::cout << "Ice copy constructor created " << this->_type << std::endl;
}

Ice &Ice::operator=( const Ice &rhs ) {
	if (this != &rhs) {
		AMateria::operator=(rhs);
	}
	// std::cout << "Ice copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}