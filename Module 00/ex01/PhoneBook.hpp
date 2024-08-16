/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:13:41 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/16 23:28:47 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook {
	private:
		static const int kMaxContacts = 8;
		Contact contacts_[kMaxContacts];
		int contact_count_;
		int	oldest_contact_;
	public:
		PhoneBook();
		void AddContactToPhoneBook(const Contact &contact);
		void DisplayContacts() const;
		int GetContactCount() const;
		Contact GetContact(int index) const;
};

void SearchContact(const PhoneBook& phoneBook);

#endif
