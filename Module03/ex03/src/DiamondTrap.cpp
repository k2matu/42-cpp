/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:18:48 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 22:32:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default") {
	this->_name = "default";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap default constructor created " << getName() << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name") {
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap constructor created " << getName() << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
		std::cout << "DiamondTrap destructor called for " << getName() << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	std::cout << "DiamondTrap copy constructor called for " << getName() << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &rhs ) {
	if (this != &rhs) {
		ClapTrap::operator=( rhs );
		ScavTrap::operator=( rhs );
		FragTrap::operator=( rhs );
	}
	return (*this);
}

void DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack( target );
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << this->_name << " and ClapTrap name: " << ClapTrap::_name << std::endl;
}
