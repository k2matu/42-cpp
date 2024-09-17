/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:28:39 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 02:20:45 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	this->_attack_damage = 30;
	this->_hit_points = 100;
	this->_energy_points = 100;
	std::cout << "FragTrap default constructor created " << getName() << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	this->_attack_damage = 30;
	this->_hit_points = 100;
	this->_energy_points = 100;
	std::cout << "FragTrap constructor created " << getName() << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destructor called for " << getName() << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for " << getName() << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &rhs ) {
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "🤚" << std::endl;
}
