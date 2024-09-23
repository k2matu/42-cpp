/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 02:39:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 14:49:44 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	protected:
		std::string *_ideas;
	public:
		Brain();
		~Brain();
		Brain( const Brain &src );
		Brain &operator=( const Brain &rhs );
		void setBrainIdeas( const std::string ideas );
		std::string getBrainIdeas() const;
};

#endif