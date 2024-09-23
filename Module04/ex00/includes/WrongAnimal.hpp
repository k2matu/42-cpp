/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:54:28 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 02:28:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( const WrongAnimal &src );
		WrongAnimal &operator=( const WrongAnimal &rhs );
		virtual void makeSound() const;
		std::string getType() const;
};

#endif