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
	this->_brain = new Brain();
	std::cout << "Cat default constructor created with a brain " << this->_brain->getBrainIdeas() << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called for and brain deleted " << this->_brain->getBrainIdeas() << std::endl;
	delete this->_brain;
}

Cat::Cat( const Cat &src ) : Animal( src ) {
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Cat copy constructor created " << std::endl;
}

Cat &Cat::operator=( const Cat &rhs ) {
	if (this != &rhs ) {
		Animal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	std::cout << "Cat copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}

void Cat::setBrainIdeas( const std::string ideas ) {
	this->_brain->setBrainIdeas( ideas );
}

std::string Cat::getBrainIdeas() const {
	return (this->_brain->getBrainIdeas());
}
