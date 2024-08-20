/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:53:38 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 21:13:40 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
