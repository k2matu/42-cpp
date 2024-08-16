/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:06:53 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/08/16 23:45:56 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
public:
	std::string first_name_;
	std::string last_name_;
	std::string nick_name_;
	std::string darkest_secret_;
	std::string phone_number_;

	Contact();
	Contact(const std::string& first_name, const std::string& last_name, 
			const std::string& nick_name, const std::string& phone_number, 
			const std::string& darkest_secret);
};

#endif