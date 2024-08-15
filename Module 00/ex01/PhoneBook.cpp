/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:13:39 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/15 00:34:19 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestContact(0) {}

static void PrintTruncated(const std::string& str)
{
	size_t MaxLength = 10;
	
	if (str.length() > MaxLength)
		std::cout << str.substr(0, MaxLength - 1) << '.';
	else
		std::cout << std::setw(MaxLength) << std::right << str;
	std::cout << "| ";
}

void PhoneBook::AddContactToPhoneBook(const Contact &contact)
{
	if (contactCount < 8)
			contacts[contactCount++] = contact;
		else
			contacts[oldestContact++] = contact;
	}
	
void PhoneBook::DisplayContacts() {
		int	MaxLenght = 10;
		
		for (int i = 0; i < contactCount; i++) {
			std::cout << std::setw(MaxLenght) << std::left << i << '|';
			PrintTruncated(contacts[i].FirstName);
			PrintTruncated(contacts[i].LastName);
			PrintTruncated(contacts[i].NickName);
			std::cout << std::endl; 
		}
	}

void SearchContact(PhoneBook& phoneBook)
{
	int	index;
	
	if (phoneBook.contactCount == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	phoneBook.DisplayContacts();
	std::cout << "Index of the entry to display: ";
	std::cin >> index;
	// catch if its not an int;
	std::cin.ignore();
	if (phoneBook.contactCount > index && index >= 0)
	{
		std::cout << "Firstname: " << phoneBook.contacts[index].FirstName << std::endl;
		std::cout << "Lastname: " << phoneBook.contacts[index].LastName << std::endl;
		std::cout << "Nickname: " << phoneBook.contacts[index].NickName << std::endl;
		std::cout << "Phonenumber: " << phoneBook.contacts[index].PhoneNumber << std::endl;
		std::cout << "Darkest Secret: " << phoneBook.contacts[index].DarkestSecret << std::endl;
	}
	else
		std::cout << "Index out of range" << std::endl;
}

bool IsValidPhoneNumber(std::string PhoneNumber)
{
	if (PhoneNumber.empty())
		return (false);
	try {
		std::stol(PhoneNumber);
		return true;
	} catch (std::invalid_argument&) {
		return false;
	} catch (std::out_of_range&) {
		return false;
	}
}

void AddContact(PhoneBook& phoneBook)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string DarkestSecret;
	std::string PhoneNumber;
	
	std::cout << "First name: ";
	std::getline(std::cin, FirstName);
	std::cout << "Last name: ";
	std::getline(std::cin, LastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, NickName);
	std::cout << "Phone number: ";
	std::getline(std::cin, PhoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, DarkestSecret);
	
	if (!IsValidPhoneNumber(PhoneNumber))
	{
		std::cout << "Invalid phone number!" << std::endl;
		return ;
	}
	if (FirstName.empty() || LastName.empty() || NickName.empty() || DarkestSecret.empty()) {
		std::cout << "All fields must be filled!" << std::endl;
		return ;
	}
		
	Contact contact1(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
	phoneBook.AddContactToPhoneBook(contact1);
}