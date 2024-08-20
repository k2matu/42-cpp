/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:33:11 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/20 21:18:28 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif