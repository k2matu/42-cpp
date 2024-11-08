/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:32:59 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 19:00:52 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() 
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0) {
			tmp = src->createMateria("ice");
		} else {
			tmp = src->createMateria("cure");
		}
		me->equip(tmp);
	}

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
	me->use(5, *bob);
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}