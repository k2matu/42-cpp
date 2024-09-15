/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:27:34 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:14:48 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
	std::cout << "Weapon "<< this->_type << " created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
}

const std::string &Weapon::getType( void ) {
	return (this->_type);
}

void Weapon::setType( const std::string type ) {
	this->_type = type;
}
