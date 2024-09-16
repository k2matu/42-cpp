/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:13:39 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/16 18:19:46 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
	: contact_count_(0), oldest_contact_(0) {}

Contact PhoneBook::GetContact(int index) const {
	if (index >= 0 && index < contact_count_) {
		return contacts_[index];
	} else {
		throw std::out_of_range("Index out of range");
	}
}

int	PhoneBook::GetContactCount() const { return contact_count_; }

static void PrintTruncated(const std::string& str) {
	static const size_t kMaxLength = 10;

	if (str.length() > kMaxLength) {
		std::cout << str.substr(0, kMaxLength - 1) << '.';
	} else {
		std::cout << std::setw(kMaxLength) << std::right << str;
	}
	std::cout << "|";
}

void PhoneBook::AddContactToPhoneBook(const Contact &contact) {
	if (contact_count_ < kMaxContacts) {
		contacts_[contact_count_++] = contact;
	} else {
		contacts_[oldest_contact_++] = contact;
		oldest_contact_ = (oldest_contact_ + 1) % kMaxContacts;
	}
}

void PhoneBook::DisplayContacts() const {
	static const int kMaxLength = 10;

	for (int i = 0; i < contact_count_; i++) {
		std::cout << std::setw(kMaxLength) << std::right << i << '|';
		PrintTruncated(contacts_[i].GetFirstName());
		PrintTruncated(contacts_[i].GetLastName());
		PrintTruncated(contacts_[i].GetNickName());
		std::cout << std::endl;
	}
}

void SearchContact(const PhoneBook& phoneBook) {
	int	index;

	if (phoneBook.GetContactCount() == 0) {
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	phoneBook.DisplayContacts();
	std::cout << "Index of the entry to display: " << std::endl;
	if (!(std::cin >> index)) {
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Invalid input!" << std::endl;
		return ;
	}
	std::cin.ignore();
	try {
		const Contact& contact = phoneBook.GetContact(index);
		std::cout << "Firstname: " << contact.GetFirstName() << std::endl;
		std::cout << "Lastname: " << contact.GetLastName() << std::endl;
		std::cout << "Nickname: " << contact.GetNickName() << std::endl;
		std::cout << "Phonenumber: " << contact.GetPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contact.GetDarkestSecret() << std::endl;
	} catch (std::out_of_range) {
		std::cout << "Index out of range" << std::endl;
	}
}
