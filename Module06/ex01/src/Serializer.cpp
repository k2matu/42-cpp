/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer default constructor created" << std::endl;
}

Serializer::~Serializer( void ) {
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer( const Serializer &src ) {
	(void)src;
	std::cout << "Serializer copy constructor created " << std::endl;
}

Serializer &Serializer::operator=( const Serializer &rhs ) {
	if (this != &rhs ) {}
	std::cout << "Serializer copy assignment operator created" << std::endl;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}