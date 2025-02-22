/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:59:57 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/22 07:33:00 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	std::cout << "Default constructor called" << std::endl;
};

PmergeMe::~PmergeMe() {
	std::cout << "Destructor called" << std::endl;
};

PmergeMe::PmergeMe(const PmergeMe &src) : _vec(src._vec), _deq(src._deq) {
	std::cout << "Copy constructor called" << std::endl;
};

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	if (this != &rhs) {
		this->_vec = rhs._vec;
		this->_deq = rhs._deq;
	}
	std::cout << "Copy assignment constructor called" << std::endl;
	return *this;
};

void PmergeMe::printTime(const std::string &type) {
	this->_end = std::chrono::system_clock::now();
	std::chrono::microseconds elapsed_us = std::chrono::duration_cast<std::chrono::microseconds>(this->_end - this->_start);
	std::cout << "Time to process a range of  " << _vec.size() << "elements with std::" << type << " : " << elapsed_us.count() <<  " us" << std::endl;
}

void PmergeMe::fordJohnsonSortVector(char **str) {
	this->_start = std::chrono::system_clock::now();
	
	// Vector assignment
	for (int i = 0; str[i]; i++) {
		_vec.push_back(std::stoi(str[i]));
	}
	
	printTime("vector");
}

void PmergeMe::fordJohnsonSortDeque(char **str) {
	this->_start = std::chrono::system_clock::now();
	
	// Deque assignment
	for (int i = 0; str[i]; i++) {
		_deq.push_back(std::stoi(str[i]));
	}
	
	printTime("deque");
	
}