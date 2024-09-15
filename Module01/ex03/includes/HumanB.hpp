/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:29:12 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:09:27 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB( std::string name );
		~HumanB( void );
		void setWeapon( Weapon &weapon );
		void attack( void );
};

#endif