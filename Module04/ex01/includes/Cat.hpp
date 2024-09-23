/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:25 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 15:02:48 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain* _brain;
	protected:
		std::string _type;
	public:
		Cat( void );
		virtual ~Cat( void );
		Cat( const Cat &src );
		Cat &operator=( const Cat &rhs );
		virtual void makeSound() const override;
		
		void setBrainIdeas( const std::string ideas );
		std::string getBrainIdeas() const;
};

#endif