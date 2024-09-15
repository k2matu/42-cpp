/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:27:34 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 09:06:44 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie object created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName( const std::string name ) {
	this->_name = name;
}