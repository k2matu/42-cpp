/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:25 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 20:16:32 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		virtual ~Cat( void );
		Cat( const Cat &src );
		Cat &operator=( const Cat &rhs );
		virtual void makeSound() const override;
};

#endif