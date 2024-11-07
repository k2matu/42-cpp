/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 19:56:47 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal &src );
		Animal &operator=( const Animal &rhs );
		virtual void makeSound() const;
		std::string getType() const;
};

#endif