/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:29 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/17 14:07:12 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		~Serializer();
		Serializer( const Serializer &src );
		Serializer &operator=( const Serializer &rhs );
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};