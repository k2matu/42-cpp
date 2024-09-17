/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 02:33:10 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap e("Bar");
	std::cout << e.getHitPoints() << std::endl;
	std::cout << e.getAttackDamage() << std::endl;
	std::cout << e.getEnergyPoints() << std::endl;
	e.highFivesGuys();
	e.guardGate();
	e.attack("Fuzz");
	e.whoAmI();

	return (0);
}
