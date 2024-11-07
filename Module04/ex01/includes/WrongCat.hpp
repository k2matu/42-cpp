/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:56:20 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 20:20:52 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		virtual ~WrongCat( void );
		WrongCat( const WrongCat &src );
		WrongCat &operator=( const WrongCat &rhs );
		virtual void makeSound() const override;
};

#endif