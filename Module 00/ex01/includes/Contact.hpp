/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:46:52 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/13 20:41:59 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
private:
	std::string first_name_;
	std::string last_name_;
	std::string nick_name_;
	std::string darkest_secret_;
	std::string phone_number_;
public:
	Contact();
	Contact(const std::string& first_name, const std::string& last_name,
			const std::string& nick_name, const std::string& phone_number,
			const std::string& darkest_secret);
	std::string GetFirstName() const { return first_name_; }
	std::string GetLastName() const { return last_name_; }
	std::string GetNickName() const { return nick_name_; }
	std::string GetDarkestSecret() const { return darkest_secret_; }
	std::string GetPhoneNumber() const { return phone_number_; }
};

#endif