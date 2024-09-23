/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 02:44:39 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 15:09:09 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "Play, eat, nap, repeat";
	}
	std::cout << "Brain default constructor allocated memory for " << this->_ideas[0] << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor freeing " << this->_ideas[0] << std::endl;
	delete[] this->_ideas;
}

Brain::Brain( const Brain &src ) {
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain copy constructor created - deep copy of " << this->_ideas[0] << std::endl;
}

Brain &Brain::operator=( const Brain &rhs ) {
	if (this != &rhs ) {
		delete[] this->_ideas;
		_ideas = new std::string[100];
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator created for " << this->_ideas[0] << std::endl;
	return (*this);
}

void Brain::setBrainIdeas( const std::string ideas ) {
	for (int i = 0; i < 100; i++ ) {
		this->_ideas[i] = ideas;
	}
}

std::string Brain::getBrainIdeas() const {
	return (this->_ideas[0]);
}
