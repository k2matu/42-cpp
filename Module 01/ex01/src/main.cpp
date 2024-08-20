/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:23:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 13:29:44 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int main( void ) {
	const int kAmount = 4;
	Zombie *horde = zombieHorde(kAmount, "Kim");

	for (int i = 0; i < kAmount; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}