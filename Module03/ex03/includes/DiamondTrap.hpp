/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:11:31 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 02:32:20 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap &operator=( const DiamondTrap &rhs );

		void whoAmI();
		void attack( const std::string &target );
};