/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:33:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 21:01:56 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

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