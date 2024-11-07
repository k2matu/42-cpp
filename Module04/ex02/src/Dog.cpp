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

Dog::Dog( void ) : AAnimal() {
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "Dog default constructor created with a brain "  << this->_brain->getBrainIdeas() <<  std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called for " << this->_brain->getBrainIdeas() << std::endl;
	delete this->_brain;
}

Dog::Dog( const Dog &src ) : AAnimal( src ) {
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	std::cout << "Dog copy constructor created " << this->_type << std::endl;
}

Dog &Dog::operator=( const Dog &rhs ) {
	if (this != &rhs ) {
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	std::cout << "Dog copy assignment operator created for " << this->_type << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}

void Dog::setBrainIdeas( const std::string ideas ) {
	this->_brain->setBrainIdeas( ideas );
}

std::string Dog::getBrainIdeas() const {
	return (this->_brain->getBrainIdeas());
}
