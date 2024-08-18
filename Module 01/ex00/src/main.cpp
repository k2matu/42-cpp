/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:37:17 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/18 00:47:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main(void) {
	Zombie *zombie1 = newZombie("Kim");
	zombie1->announce();
	randomChump("Leon");
}