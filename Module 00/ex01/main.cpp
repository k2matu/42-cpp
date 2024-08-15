/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:21:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/15 00:27:55 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string Input;

	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, Input);
		if (strcmp(Input.c_str(), "EXIT") == 0)
			break ;
		else if (strcmp(Input.c_str(), "ADD") == 0)
			AddContact(phoneBook);
		else if (strcmp(Input.c_str(), "SEARCH") == 0)
			SearchContact(phoneBook);
	}
	return (0);
}