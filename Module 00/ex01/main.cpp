/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:21:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/16 23:25:34 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static bool IsValidPhoneNumber(std::string phone_number)
{
	if (phone_number.empty()) {
		return (false);
	}
	try {
		std::stol(phone_number);
		return true;
	} catch (std::invalid_argument&) {
		return false;
	} catch (std::out_of_range&) {
		return false;
	}
}

static void AddContact(PhoneBook& phone_book)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string darkest_secret;
	std::string phone_number;
	
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nick_name);
	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	
	if (!IsValidPhoneNumber(phone_number)) {
		std::cout << "Invalid phone number!" << std::endl;
		return ;
	}
	if (first_name.empty() || last_name.empty() || nick_name.empty() || darkest_secret.empty()) {
		std::cout << "All fields must be filled!" << std::endl;
		return ;
	}
		
	Contact contact1(first_name, last_name, nick_name, phone_number, darkest_secret);
	phone_book.AddContactToPhoneBook(contact1);
}

int main(void)
{
	PhoneBook phone_book;
	std::string input;

	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			AddContact(phone_book);
		else if (input == "SEARCH")
			SearchContact(phone_book);
	}
	return (0);
}