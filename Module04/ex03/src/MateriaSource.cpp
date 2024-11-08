/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:24:00 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 11:44:31 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < kMaxMaterias; i++) {
		learnedMaterias[i] = nullptr;
	}
	// std::cout << "MateriaSource default constructor created" << std::endl;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < kMaxMaterias; i++) {
		delete learnedMaterias[i];
	}
// 	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &src ) {
	for (int i = 0; i < kMaxMaterias; i++) {
		if (src.learnedMaterias[i] != nullptr) {
			learnedMaterias[i] = src.learnedMaterias[i]->clone();}
		else {
			learnedMaterias[i] = nullptr;
		}
	}
	// std::cout << "MateriaSource copy constructor created" << std::endl;
}

MateriaSource &MateriaSource::operator=( const MateriaSource &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < kMaxMaterias; i++) {
			delete learnedMaterias[i];
			if (rhs.learnedMaterias[i] != nullptr) {
				learnedMaterias[i] = rhs.learnedMaterias[i]->clone();
			} else {
				learnedMaterias[i] = nullptr;
			}
		}
	}
	// std::cout << "MateriaSource copy assignment operator created" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < kMaxMaterias; i++) {
		if (learnedMaterias[i] == nullptr) {
			learnedMaterias[i] = m->clone();
			delete m;
			std::cout << "MateriaSource: learned " << m->getType() << std::endl;
			return ;
		}
	}
	delete m;
	std::cout << "MateriaSource: Can't learn more materias. Inventory full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < kMaxMaterias; i++) {
		if (learnedMaterias[i] != nullptr && learnedMaterias[i]->getType() == type) {
			return (learnedMaterias[i]->clone());
		}
	}
	return (0);
}
