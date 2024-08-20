/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:37:17 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/19 00:11:41 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main(void) {
	Zombie *zombie1 = newZombie("Kim");
	zombie1->announce();
	randomChump("Leon");
	delete zombie1;
	return (0);
}