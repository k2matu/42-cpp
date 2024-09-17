/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:38:34 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 22:13:49 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap default constructor created " << getName() << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap constructor created " << getName() << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called for " << getName() << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &rhs ) {
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

void ScavTrap::attack( const std::string& target ) {
	if (!getHitPoints()) {
		std::cout << "ScavTrap " << getName() << " can't attack. Has no hit points left." << std::endl;} 
	else if (!getEnergyPoints()) {
		std::cout << "ScavTrap " << getName() << " can't attack. Has no energy points left." << std::endl;
	} else {
		std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage" << std::endl;
		setEnergyPoints(-1);
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
