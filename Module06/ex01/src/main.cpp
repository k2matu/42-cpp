/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2025/01/17 14:19:33 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void) {
	Data *ptr = new Data;
	ptr->name = "Kim";
	ptr->age = 34;
	
	uintptr_t raw = Serializer::serialize(ptr);
	Data *reserialize = Serializer::deserialize(raw);
	
	std::cout << reserialize->name << std::endl;
	std::cout << reserialize->age << std::endl;
	
	delete ptr;
	return 0;
}
