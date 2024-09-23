/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:57:15 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 15:24:10 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor created" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called for " << this->_type << std::endl;
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal( src ) {
	std::cout << "WrongCat copy constructor created " << this->_type << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs ) {
	if (this != &rhs ) {
		WrongAnimal::operator=(rhs);
	}
	std::cout << "WrongCat copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCats don't bark" << std::endl;
}
