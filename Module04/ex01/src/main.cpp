/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/07 20:32:14 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete i;
	delete j;
	
	Dog dog3;
	dog3.makeSound();
	dog3.setBrainIdeas("Zzzzzzzz");
	Dog dog4 = dog3;
	std::cout << dog4.getBrainIdeas() << std::endl;
	
	dog3.setBrainIdeas("New idea");
	
	std::cout << "dog3 brain ideas after modification " << dog3.getBrainIdeas() << std::endl;
	std::cout << "dog4 brain ideas after dog3 brain modification " << dog4.getBrainIdeas() << std::endl;
	
	const Animal* arr[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2) {
			arr[i] = new Dog();
		} else {
			arr[i] = new Cat();
		}
	}
	
	for (int i = 0; i < 10; i++) {
		delete arr[i];
	}
	
	return 0;
}
