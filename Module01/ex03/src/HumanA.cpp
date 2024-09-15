/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:37:03 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:11:55 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	std::cout << "HumanA "<< this->_name << " created, with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {
		std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}

void HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
