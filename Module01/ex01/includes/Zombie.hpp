/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:24:17 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 08:53:08 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie( void );
		~Zombie( void );
		void announce( void );
		void setName( const std::string name );
};

Zombie	*zombieHorde( int N, std::string name );

#endif