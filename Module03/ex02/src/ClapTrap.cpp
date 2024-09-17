/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:41:44 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 22:31:31 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap constructor created " << this->_name << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap constructor created " << this->_name << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) : _name(src._name), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_damage(src._attack_damage) {
	std::cout << "ClapTrap copy constructor created " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	if (this != &src) {
		this->_name =  src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
		std::cout << "ClapTrap copy assignment operator created " << this->_name << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (!getHitPoints()) {
		std::cout << "ClapTrap " << getName() << " can't attack. Has no hit points left." << std::endl;} 
	else if (!getEnergyPoints()) {
		std::cout << "ClapTrap " << getName() << " can't attack. Has no energy points left." << std::endl;
	} else {
		std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage" << std::endl;
		setEnergyPoints(-1);
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHitPoints() <= 0) {
		std::cout << "ClapTrap " << getName() << " is already dead" << std::endl;
	} else {
		std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage" << std::endl;
		setHitPoints(-amount);
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergyPoints() <= 0) {
		std::cout << "ClapTrap " << getName() << " can't repair itself. Has no energy points left" << std::endl;
	} else if (getHitPoints() <= 0) {
		std::cout << "ClapTrap " << getName() << " can't repair itself. Has no hit points left" << std::endl;
	} else {
		std::cout << "ClapTrap " << getName() << " repairs itself with " << amount << " hit points" << std::endl;
		setEnergyPoints(-1);
		setHitPoints(amount);
	}
}

std::string ClapTrap::getName() const {
	return (this->_name);
}

void ClapTrap::setHitPoints( int amount ) {
	this->_hit_points += amount;
}

int	ClapTrap::getHitPoints() const {
	return (this->_hit_points);
}

void ClapTrap::setEnergyPoints( int amount ) {
	this->_energy_points += amount;
}

int	ClapTrap::getEnergyPoints() const {
	return (this->_energy_points);
}

void ClapTrap::setAttackDamage( int amount ) {
	this->_attack_damage += amount;
}

int	ClapTrap::getAttackDamage() const {
	return (this->_attack_damage);
}
