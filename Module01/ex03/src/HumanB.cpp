/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:44:03 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:09:41 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(nullptr) {
	std::cout << "HumanB "<< this->_name << " created, without weapon" << std::endl;
}

HumanB::~HumanB() {
		std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
void	HumanB::attack( void ) {
	if (_weapon) {
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	} else {
		std::cout << this->_name << " has no weapon" << std::endl;
	}
}
