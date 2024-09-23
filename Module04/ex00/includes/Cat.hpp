/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:25 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 02:28:36 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal {
	protected:
		std::string type;
	public:
		Cat( void );
		virtual ~Cat( void );
		Cat( const Cat &src );
		Cat &operator=( const Cat &rhs );
		virtual void makeSound() const override;
};

#endif