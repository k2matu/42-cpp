/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 13:55:12 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

void printVec(const std::vector<int> &vec) {
	for (auto i : vec) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main() {
	
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// printVec(sp.getVector());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (const Span::VecFullException &ex) {
		std::cerr << ex.what() << std::endl;
	} catch (const Span::NoSpanException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	try {
		Span sp1 = Span(20);
		sp1.addMultipleNumbers(1, 10);
		sp1.addMultipleNumbers(3, 5);
		sp1.addMultipleNumbers(8, 5);
		printVec(sp1.getVector());
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	} catch (const Span::VecFullException &ex) {
		std::cerr << ex.what() << std::endl;
	} catch (const Span::NoSpanException &ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	try {
		Span sp2 = Span(12000);
		sp2.addNumber(1);
		sp2.addMultipleNumbers(4, 10000);
		sp2.addMultipleNumbers(10, 1500);
		sp2.addMultipleNumbers(15, 499);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	} catch (const Span::VecFullException &ex) {
		std::cerr << ex.what() << std::endl;
	} catch (const Span::NoSpanException &ex) {
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}
