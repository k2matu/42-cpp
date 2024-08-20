/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 00:16:20 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 13:29:20 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return (horde);
}