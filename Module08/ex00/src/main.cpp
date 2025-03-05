/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 11:36:29 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <list>

int main( void ) {
	std::vector<int> v = { 5, 7, 1, 2, 3, 7, 1 };
	std::list<int> l = {4, 6, 1, 8, 4};
	
	int indexV = easyfind(v, 0);
	int indexL = easyfind(l, 2);
	
	std::cout << "Index of vector which does not exist: " << indexV << std::endl;
	std::cout << "Index of list which does not exist: " << indexL << std::endl;
	
	indexV = easyfind(v, 1);
	indexL = easyfind(l, 4);
	
	std::cout << "Index of vector: " << indexV << std::endl;
	std::cout << "Index of list: " << indexL << std::endl;
	return 0;
}