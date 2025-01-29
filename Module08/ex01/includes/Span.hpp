/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/29 13:38:25 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <exception> 
#include <algorithm> 

class Span {
	private:
		unsigned int _size;
		std::vector<int> _vec;
	public:
		Span(unsigned int size);
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &rhs);

		void addNumber(int i);
		void addMultipleNumbers(int i, int range);
		int shortestSpan();
		int longestSpan();
		
		const std::vector<int> &getVector() const;
		
		class VecFullException : public std::exception {
			public: 
				virtual const char* what() const noexcept {
					return "The vector is full exception";
			}
		};
		
		class NoSpanException : public std::exception {
			public:
				virtual const char* what() const noexcept {
					return "No/only one number stored";
				}
		};
};

