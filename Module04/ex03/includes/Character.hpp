/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:12:56 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:48:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp" 

class Character: public ICharacter {
	private:
		static const int kMaxFloor = 10;
		static const int kMaxInventory = 4;
		AMateria *inventory[kMaxInventory];
		AMateria *floor[kMaxFloor];
		std::string _name;
		int	_inventory_count;
		int _floor_count;
	public:
		Character( std::string const name );
		virtual ~Character( void );
		Character( const Character &src );
		Character &operator=( const Character &rhs );
		
		std::string const &getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif