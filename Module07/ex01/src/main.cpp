/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/20 11:50:48 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main( void ) {
	int arr[3] = {2, 5, 6};
	char str[5] = {'A', 'b', 'c', 'd', 'e'};
	float arr1[4] = {4.2, 2.3, 1.1, 0.2};

	iter(arr, sizeof(arr) / sizeof(arr[0]), plusOne<int>);
	iter(str, sizeof(str) / sizeof(str[0]), plusOne<char>);
	iter(arr1, sizeof(arr1) / sizeof(arr1[0]), plusOne<float>);

	for ( int i : arr ) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	for ( char c : str ) {
		std::cout << c << " ";
	}
	std::cout << std::endl;

		for ( float f : arr1 ) {
		std::cout << f << " ";
	}
	std::cout << std::endl;

	return 0;
}