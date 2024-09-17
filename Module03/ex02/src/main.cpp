/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 22:50:36 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	FragTrap e;
	std::cout << e.getHitPoints() << std::endl;
	std::cout << e.getEnergyPoints() << std::endl;
	std::cout << e.getAttackDamage() << std::endl;
	
	FragTrap c("Buzz");
	
	e = c;
	std::cout << e.getName() << std::endl;
	std::cout << e.getHitPoints() << std::endl;
	std::cout << e.getEnergyPoints() << std::endl;
	std::cout << e.getAttackDamage() << std::endl;

	c.attack("Bar");
	c.highFivesGuys();
	return (0);
}
