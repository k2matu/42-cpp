/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:13:41 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/15 00:23:19 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
	public:
		Contact contacts[8];
		int contactCount;
		int	oldestContact;
		
		PhoneBook();
		void AddContactToPhoneBook(const Contact &contact);
		void DisplayContacts();
};

void SearchContact(PhoneBook& phoneBook);
bool IsValidPhoneNumber(std::string PhoneNumber);
void AddContact(PhoneBook& phoneBook);

#endif