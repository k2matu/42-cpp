/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:16:44 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 22:46:35 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
	// std::cout << "Cure default constructor created " << this->_type << std::endl;
}

Cure::~Cure( void ) {
	// std::cout << "Cure destructor called for " << this->_type << std::endl;
}

Cure::Cure( const Cure &src ) : AMateria(src) {
	// std::cout << "Cure copy constructor created " << this->_type << std::endl;
}

Cure &Cure::operator=( const Cure &rhs ) {
	if (this != &rhs) {
		AMateria::operator=(rhs);
	}
	// std::cout << "Cure copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}