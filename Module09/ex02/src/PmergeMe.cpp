/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:59:57 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/22 09:50:12 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &src) : _vec(src._vec), _deq(src._deq) {};

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	if (this != &rhs) {
		this->_vec = rhs._vec;
		this->_deq = rhs._deq;
	}
	return *this;
};

void PmergeMe::printTime(const std::string &type) {
	std::chrono::microseconds elapsed_us = std::chrono::duration_cast<std::chrono::microseconds>(this->_end - this->_start);
	std::cout << "Time to process a range of  " << _vec.size() << " elements with std::" << type << " : " << elapsed_us.count() <<  " us" << std::endl;
}

void PmergeMe::fordJohnsonSortVector(char **str) {
	this->_start = std::chrono::system_clock::now();
	
	// Vector assignment
	for (int i = 0; str[i]; i++) {
		_vec.push_back(std::stoi(str[i]));
	}
	
	if (_vec.size() == 1 || is_sorted(_vec.begin(), _vec.end())) {
		std::cout << "After:  " << _vec[0] << std::endl;
		this->_end = std::chrono::system_clock::now();
		printTime("vector");
		return ;
	}
	
	std::vector<int> small;
	std::vector<int> extra;
	for (size_t i = 0; i < _vec.size(); i++) {
		if (i + 1 < _vec.size())
			if (_vec[i] < _vec[i + 1]) {
				small.push_back(_vec[i]);
				_vec.erase(_vec.begin() + i);
			} else {
				small.push_back(_vec[i + 1]);
				_vec.erase(_vec.begin() + i + 1);
			}
		else {
			extra.push_back(_vec[i]);
			_vec.erase(_vec.begin() + i);
			break;
		}
	}

	sort(_vec.begin(), _vec.end());
	for (size_t i = 0; i < small.size(); i++) {
		auto it = std::upper_bound(_vec.begin(), _vec.end(), small[i]);
		_vec.insert(it, small[i]);
	}
	
	if (!extra.empty()) {
		auto it = std::upper_bound(_vec.begin(), _vec.end(), extra[0]);
		_vec.insert(it, extra[0]);
	}
	
	this->_end = std::chrono::system_clock::now();
	std::cout << "After: "; 
	for (int i : _vec) {
		std::cout << " " << i;
	}
	std::cout << std::endl;
	printTime("vector");
}

void PmergeMe::fordJohnsonSortDeque(char **str) {
	this->_start = std::chrono::system_clock::now();
	
	// Deque assignment
	for (int i = 0; str[i]; i++) {
		_deq.push_back(std::stoi(str[i]));
	}
	
	if (_deq.size() == 1 || is_sorted(_deq.begin(), _deq.end())) {
		this->_end = std::chrono::system_clock::now();
		printTime("deque");
		return ;
	}
	
	std::deque<int> small;
	std::deque<int> extra;
	for (size_t i = 0; i < _deq.size(); i++) {
		if (i + 1 < _deq.size())
			if (_deq[i] < _deq[i + 1]) {
				small.push_back(_deq[i]);
				_deq.erase(_deq.begin() + i);
			} else {
				small.push_back(_deq[i + 1]);
				_deq.erase(_deq.begin() + i + 1);
			}
		else {
			extra.push_back(_deq[i]);
			_deq.erase(_deq.begin() + i);
			break;
		}
	}

	sort(_deq.begin(), _deq.end());
	for (size_t i = 0; i < small.size(); i++) {
		auto it = std::upper_bound(_deq.begin(), _deq.end(), small[i]);
		_deq.insert(it, small[i]);
	}
	
	if (!extra.empty()) {
		auto it = std::upper_bound(_deq.begin(), _deq.end(), extra[0]);
		_deq.insert(it, extra[0]);
	}
	this->_end = std::chrono::system_clock::now();
	printTime("deque");
}