/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:39:30 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 13:58:01 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) 
	: _size(size) {
	std::cout << "Span constructor created vector of " << this->_size << std::endl;
}

Span::~Span() {
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span &src) 
	: _size(src._size), _vec(src._vec) {
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		this->_vec = rhs._vec;
		this->_size = rhs._size;
	}
	std::cout << "Span copy assignment operator called" << std::endl;
	return *this;
}

void Span::addNumber(int i) {
	if (this->_vec.size() >= this->_size) {
		throw VecFullException();
	}
	this->_vec.push_back(i);
}

void Span::addMultipleNumbers(int i, int range) {
	if (this->_vec.size() + range > this->_size) {
		throw VecFullException();
	}
	_vec.insert(_vec.end(), range, i);
}

int Span::shortestSpan() {
	if (this->_vec.size() < 2) {
		throw NoSpanException();
	}
	int diff = INT_MAX;
	std::vector<int>temp = _vec;
	stable_sort(temp.begin(), temp.end());
	
	for (size_t i = 0; i < temp.size() - 1; i++) {
		if ((temp[i + 1] - temp[i]) < diff)
			diff = temp[i + 1] - temp[i];
	}
	return (diff);
}

int Span::longestSpan() {
	if (this->_vec.size() < 2) {
		throw NoSpanException();
	}
	auto p = minmax_element(_vec.begin(), _vec.end());
	return (*p.second - *p.first);
}

const std::vector<int> &Span::getVector() const {
	return this->_vec;
}

