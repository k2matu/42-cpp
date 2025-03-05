/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:26 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/02/12 14:13:21 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <string>
#include <sstream>

class RPN {
	private:
		std::stack<int> _stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN &src);
		RPN &operator=(const RPN &rhs);
		
		bool executeMath(const std::string &str);
		int convert(int num1, int num2, char s);
};

