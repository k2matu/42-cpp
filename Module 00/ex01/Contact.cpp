/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:08:22 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/15 00:28:36 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : FirstName(""), LastName(""), NickName(""), DarkestSecret(""), PhoneNumber("") {}

Contact::Contact(std::string Firstname, std::string Lastname, std::string Nickname, std::string Phonenumber, std::string Darkestsecret) :
	FirstName(Firstname),
	LastName(Lastname),
	NickName(Nickname),
	DarkestSecret(Darkestsecret),
	PhoneNumber(Phonenumber) {}