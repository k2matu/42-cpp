/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:21:09 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/13 20:08:33 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

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

	std::cout << prompt << std::endl;
	std::getline(std::cin, input);
	return (input);
}

static void AddContact(PhoneBook& phonebook) {
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
	phonebook.AddContactToPhoneBook(contact);
}

int main(void)
{
	PhoneBook phonebook1;
	std::string input;

	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			AddContact(phonebook1);
		else if (input == "SEARCH")
			SearchContact(phonebook1);
	}
	return (0);
}
