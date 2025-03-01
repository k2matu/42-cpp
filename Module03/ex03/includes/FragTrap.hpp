/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:25:01 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 02:06:50 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( const FragTrap &other );
		FragTrap &operator=( const FragTrap &rhs );

		void highFivesGuys( void );
};

#endif