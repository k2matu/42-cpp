/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:08:22 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/16 18:18:57 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() 
	: first_name_(""), last_name_(""), nick_name_(""), darkest_secret_(""), 
	phone_number_("") {}

Contact::Contact(const std::string& first_name, const std::string& last_name, 
				const std::string& nick_name, const std::string& phone_number, 
				const std::string& darkest_secret)
	: first_name_(first_name), last_name_(last_name), nick_name_(nick_name),
	darkest_secret_(darkest_secret), phone_number_(phone_number) {}
	
std::string Contact::GetFirstName() const { return first_name_; }
std::string Contact::GetLastName() const { return last_name_; }
std::string Contact::GetNickName() const { return nick_name_; }
std::string Contact::GetDarkestSecret() const { return darkest_secret_; }
std::string Contact::GetPhoneNumber() const { return phone_number_; }
