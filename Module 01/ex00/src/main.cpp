/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:49:22 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/14 22:10:14 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie *zombie1 = newZombie("Foo");
	zombie1->announce();
	randomChump("Bar");
	delete zombie1;
	return (0);
}
