/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:18:48 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 00:07:51 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap() {
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "attack damage in constructor" << this->_attack_damage << std::endl;
	std::cout << "DiamondTrap default constructor created " << getName() << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name"), FragTrap(), ScavTrap() {
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "attack damage in constructor" << this->_attack_damage << std::endl;
	std::cout << "DiamondTrap constructor created " << getName() << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
		std::cout << "DiamondTrap destructor called for " << getName() << std::endl;
}

