/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:12:56 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:42:27 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice( void );
		virtual ~Ice( void );
		Ice( const Ice &src );
		Ice &operator=( const Ice &rhs );
		
		virtual AMateria* clone() const override;
		virtual void use(ICharacter& target) override;
};

#endif