/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/17 14:24:16 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a("Foo");
	ClapTrap b("Bar");

	a.attack("Buzz");
	b.takeDamage(5);
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Buzz");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Foo");
	b.beRepaired(3);

	return (0);
}
