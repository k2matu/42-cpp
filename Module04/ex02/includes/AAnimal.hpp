/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 21:12:32 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
	protected:
		std::string _type;
	public:
		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal( const AAnimal &src );
		AAnimal &operator=( const AAnimal &rhs );
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif