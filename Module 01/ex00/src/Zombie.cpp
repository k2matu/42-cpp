/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:28:11 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/18 00:50:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name_ = name;
	std::cout << "Zombie object " << this->name_ << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie object " << this->name_ << " destroyed" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
