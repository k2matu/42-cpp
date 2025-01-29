/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 20:05:12 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template<typename T> 
class MutantStack : public std::stack<T>{
	public:
		using stack = std::stack<T>;
		using container = typename stack::container_type;
		using iterator = typename container::iterator;
		
		MutantStack() : stack() {
			std::cout << "Default constructor called" << std::endl;
		}
		~MutantStack() {
			std::cout << "Destructor called" << std::endl;
		};
		MutantStack(const MutantStack &src) : stack(src) {
			std::cout << "Copy constructor called" << std::endl;
		}
		stack &operator=(const stack &rhs) {
			if (*this != rhs) {
				*this = rhs;
			}
			return *this;
		}
		
		iterator begin() {
			return (stack::c.begin());
		}
		
		iterator end() {
			return (stack::c.end());
		}
};

