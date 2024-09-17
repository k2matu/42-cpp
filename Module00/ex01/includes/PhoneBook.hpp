/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:46:45 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/16 21:36:27 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
	private:
		static const int kMaxContacts;
		Contact contacts_[8];
		int contact_count_;
		int oldest_contact_;
	public:
		PhoneBook();
		void AddContactToPhoneBook(const Contact &contact);
		void DisplayContacts() const;
		int	GetContactCount() const;
		Contact GetContact(int index) const;
};

void SearchContact(const PhoneBook& phoneBook);

#endif