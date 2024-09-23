/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/19 15:15:41 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// Dog dog3;
	// dog3.makeSound();
	// dog3.setBrainIdeas("Zzzzzzzz");
	// Dog dog4 = dog3;
	// std::cout << dog4.getBrainIdeas() << std::endl;
	// delete i;
	// delete j;
	
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
