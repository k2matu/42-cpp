/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 18:20:50 by kmatjuhi         ###   ########.fr       */
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

// int main()
// {
// 	std::cout << "************" << std::endl;
// 	DiamondTrap	dt1("Diamond1");
// 	std::cout << std::endl;
// 	dt1.attack("target1");
// 	dt1.takeDamage(10);
// 	dt1.beRepaired(5);
// 	dt1.guardGate();
	

// 	std::cout << std::endl;
// 	std::cout << "************" << std::endl;
// 	DiamondTrap	dt2("Diamond2");
// 	std::cout << std::endl;
// 	dt2.attack("target2");
// 	dt2.takeDamage(20);
// 	dt2.beRepaired(10);
// 	dt2.highFivesGuys();

// 	std::cout << std::endl;
// 	std::cout << "************" << std::endl;
// 	DiamondTrap	dt3(dt1);
// 	std::cout << std::endl;
// 	dt3.attack("target3");
// 	dt3.takeDamage(30);
// 	dt3.beRepaired(15);

// 	std::cout << std::endl;
// 	std::cout << "************" << std::endl;
// 	dt1.whoAmI();
// 	dt2.whoAmI();
// 	dt3.whoAmI();

// 	std::cout << std::endl;
// 	std::cout << "************" << std::endl;
// 	return 0;
// }