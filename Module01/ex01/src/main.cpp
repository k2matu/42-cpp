/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:49:22 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 08:55:26 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	int	amount = 3;
	Zombie *horde = zombieHorde(amount, "Foo");
	
	for (int i = 0; i < amount; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
