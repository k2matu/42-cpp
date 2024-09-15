/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:29:21 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/15 14:02:03 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void attack( void );
};

#endif