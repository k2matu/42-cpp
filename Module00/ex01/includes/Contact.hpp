/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:46:52 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/16 18:18:36 by kmatjuhi         ###   ########.fr       */
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
	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetNickName() const;
	std::string GetDarkestSecret() const;
	std::string GetPhoneNumber() const;
};

#endif