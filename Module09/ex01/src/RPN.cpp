/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:39:30 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/12 14:31:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
	std::cout << "RPN constructor created " << std::endl;
}

RPN::~RPN() {
	std::cout << "RPN destructor called" << std::endl;
}

RPN::RPN(const RPN &src) 
	: _stack(src._stack) {
	std::cout << "RPN copy constructor called" << std::endl;
}

RPN &RPN::operator=(const RPN &rhs) {
	if (this != &rhs) {
		this->_stack = rhs._stack;
	}
	std::cout << "RPN copy assignment operator called" << std::endl;
	return *this;
}

int RPN::convert(int num1, int num2, char s) {
	switch(s) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			return num1 / num2;
		default:
			return -1;
	}
}

bool RPN::executeMath(const std::string &str) {
	std::size_t found = str.find_first_not_of("0123456789+-/* ");
	if (found != std::string::npos) {
		return false;
	}

	std::string s;
	std::stringstream ss(str);

	while (getline(ss, s, ' ')) {
		if (s.length() != 1) {
			return false;
		}
		if (s[0] >= '0' && s[0] <= '9') {
			_stack.push(std::stoi(s));
		} 
		else {
			int num1, num2, result;
			if (!_stack.empty()) {
				num1 = _stack.top();
				_stack.pop();
			} else {
				return false;
			}
			if (!_stack.empty()) {
				num2 = _stack.top();
				_stack.pop();
			} else {
				return false;
			}
			result = convert(num2, num1, s[0]);
			_stack.push(result);
		}
	}
	std::cout << _stack.top() << std::endl;
	return true;
}
