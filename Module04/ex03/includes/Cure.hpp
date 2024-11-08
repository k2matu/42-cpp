/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:12:56 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:51:04 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure( void );
		virtual ~Cure( void );
		Cure( const Cure &src );
		Cure &operator=( const Cure &rhs );
		
		virtual AMateria* clone() const override;
		virtual void use(ICharacter& target) override;
};

#endif