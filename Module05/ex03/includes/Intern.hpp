/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:33:53 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/10 22:13:23 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;
class ShruborbRequestForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern {
	public:
		Intern();
		~Intern();
		Intern( const Intern &src );
		Intern &operator=( const Intern &rhs );
		
		static AForm* createRobotomyRequestForm(const std::string& target);
		static AForm* createShrubberyCreationForm(const std::string& target);
		static AForm* createPresidentialPardonForm(const std::string& target);
		

		AForm *makeForm(const std::string &form, const std::string &target);
};