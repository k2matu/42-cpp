/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 20:20:21 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(15);
	mstack.push(737);

	std::cout << mstack.top() << std::endl;
	
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	mstack.pop();
	std::cout << "After pop: "<< mstack.top() << std::endl;

	std::cout << mstack.size() << std::endl;

	mstack.push(0);
	std::cout << "size: " << mstack.size() << std::endl;
	
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	MutantStack<int>::iterator it = mstack.begin();

	std::cout << mstack.top() << std::endl;;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << *it << std::endl;
	++it;
	std::cout << *it << std::endl;
	
	std::cout << "--------------LIST---------------------" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	lst.push_back(3);
	lst.push_back(15);
	lst.push_back(737);

	std::cout << lst.back() << std::endl;

	for (std::list<int>::iterator it1 = lst.begin(); it1 != lst.end(); it1++) {
			std::cout << *it1 << " ";
	}
	std::cout << std::endl;

	lst.pop_back();
	std::cout << "After pop: "<< lst.back() << std::endl;

	std::cout << lst.size() << std::endl;

	lst.push_back(0);
	std::cout << "size: "<< lst.size() << std::endl;
	
	for (std::list<int>::iterator it1 = lst.begin(); it1 != lst.end(); it1++) {
			std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	
	std::list<int>::iterator it1 = lst.begin();
	std::cout << lst.back() << std::endl;;
	
	for (std::list<int>::iterator it1 = lst.begin(); it1 != lst.end(); it1++) {
			std::cout << *it1 << " ";
	}
	std::cout << std::endl;

	std::cout << *it1 << std::endl;
	++it1;
	std::cout << *it1 << std::endl;
	return 0;
}