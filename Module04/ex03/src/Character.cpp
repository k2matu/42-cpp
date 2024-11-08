/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:43:03 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 18:41:30 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const name ) : _name(name), _inventory_count(0), _floor_count(0) {
	for (int i = 0; i < kMaxInventory; i++) {
		inventory[i] = nullptr;
	}
	for (int i = 0; i < kMaxFloor; i++) {
		floor[i] = nullptr;
	}
	// std::cout << "Character default constructor created " << this->_name << std::endl;
}

Character::~Character( void ) {
	// std::cout << "Character destructor called for " << this->_name << std::endl;
	for (int i = 0; i < kMaxInventory; i++) {
		delete inventory[i];
	}
	for (int i = 0; i < kMaxFloor; i++) {
		delete floor[i];
	}
}

Character::Character( const Character &src ) : _name(src._name), _inventory_count(src._inventory_count), _floor_count(src._floor_count) {
	for (int i = 0; i < kMaxInventory; i++) {
		if (src.inventory[i] != nullptr) {
			this->inventory[i] = src.inventory[i]->clone();
		} else {
			inventory[i] = nullptr;
		}
	}
	for (int i = 0; i < kMaxFloor; i++) {
		if (src.floor[i] != nullptr) {
			this->floor[i] = src.floor[i]->clone();
		} else {
			floor[i] = nullptr;
		}
	}
	// std::cout << "Character copy constructor created" << this->_name << std::endl;
}

Character &Character::operator=( const Character &rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_inventory_count = rhs._inventory_count;
		this->_floor_count = rhs._floor_count;

		for (int i = 0; i < kMaxInventory; i++) {
			delete inventory[i];
			if (rhs.inventory[i] != nullptr) {
				this->inventory[i] = rhs.inventory[i]->clone();
			} else {
				inventory[i] = nullptr;
			}
		}
		for (int i = 0; i < kMaxFloor; i++) {
			delete floor[i];
			if (rhs.floor[i] != nullptr) {
				this->floor[i] = rhs.floor[i]->clone();
			} else {
				floor[i] = nullptr;
			}
		}
	}
	// std::cout << "Character copy assignment operator created for "<< this->_name << std::endl;
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	if (this->_inventory_count == kMaxInventory || m == nullptr)
		return ;
	
	for (int i = 0; i < kMaxInventory; i++) {
		if (inventory[i] == nullptr) {
			std::cout << this->getName() << " equipted " << m->getType() << std::endl;
			this->inventory[i] = m;
			this->_inventory_count++;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (this->inventory[idx]) {
		std::cout << this->getName() << " unequipted " << this->inventory[idx]->getType() << std::endl;
		if (this->_floor_count < kMaxFloor) {
			floor[_floor_count++] = this->inventory[idx];
		}
		this->_inventory_count--;
		this->inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
		delete inventory[idx];
		this->_inventory_count--;
		this->inventory[idx] = nullptr;
	}
}