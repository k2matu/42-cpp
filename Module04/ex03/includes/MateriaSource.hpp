/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:27:14 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:08:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		static const int kMaxMaterias = 4;
		AMateria *learnedMaterias[kMaxMaterias];
	public:
		MateriaSource( void );
		virtual ~MateriaSource( void );
		MateriaSource( const MateriaSource &src );
		MateriaSource &operator=( const MateriaSource &rhs );
		
		virtual void learnMateria(AMateria*) override;
		virtual AMateria* createMateria(std::string const & type) override;
};

#endif