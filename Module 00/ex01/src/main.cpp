/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:21:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/17 01:06:20 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static bool IsValidPhoneNumber(const std::string& phone_number) {
	if (phone_number.empty()) {
		return (false);
	}
	if (!(isdigit(phone_number[0])) && phone_number[0] != '+') {
		return (false);
	}
	for (size_t i = 1; i < phone_number.size(); i++) {
		if (!(isdigit(phone_number[i]))) {
			return (false);
		}
	}
	return (true);
}

static std::string GetInput(const std::string& prompt) {
	std::string input;
	
	std::cout << prompt;
	std::getline(std::cin, input);
	return (input);
}

static void AddContact(PhoneBook& phone_book) {
	std::string first_name = GetInput("First Name: ");
	std::string last_name = GetInput("Last Name :");
	std::string nick_name = GetInput("Nickname: ");
	std::string phone_number = GetInput("Phone Number: ");
	std::string darkest_secret = GetInput("Darkest Secret: ");

	if (!IsValidPhoneNumber(phone_number)) {
		std::cout << "Invalid phone number!" << std::endl;
		return ;
	}
	if (first_name.empty() || last_name.empty() || nick_name.empty() 
	|| darkest_secret.empty()) {
		std::cout << "All fields must be filled!" << std::endl;
		return ;
	}
	Contact contact(first_name, last_name, nick_name, phone_number, 
	darkest_secret);
	phone_book.AddContactToPhoneBook(contact);
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
