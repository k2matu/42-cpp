/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:46:45 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/13 20:27:06 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
	private:
		static const int kMaxContacts = 8;
		Contact contacts_[kMaxContacts];
		int contact_count_;
		int oldest_contact_;
	public:
		PhoneBook();
		void AddContactToPhoneBook(const Contact &contact);
		void DisplayContacts() const;
		int	GetContactCount() const { return contact_count_; };
		Contact GetContact(int index) const;
};

void SearchContact(const PhoneBook& phoneBook);

#endif