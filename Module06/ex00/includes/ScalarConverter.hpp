/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:29 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 23:20:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>

class ScalarConverter {
	private:
		ScalarConverter();
	public:
		~ScalarConverter();
		ScalarConverter( const ScalarConverter &src );
		ScalarConverter &operator=( const ScalarConverter &rhs );
		
		static void convert(const std::string &value);
};