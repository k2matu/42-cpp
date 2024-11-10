/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/10 22:15:05 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor created" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern( const Intern &src ) {
	*this = src;
	std::cout << "Intern copy constructor created " << std::endl;
}

Intern &Intern::operator=( const Intern &rhs ) {
	if (this != &rhs ) {}
	std::cout << "Intern copy assignment operator created for " << std::endl;
	return (*this);
}

AForm* Intern::createRobotomyRequestForm(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createShrubberyCreationForm(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createPresidentialPardonForm(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string &form, const std::string &target) {
	AForm* (*ptrToFormFunc[3])( const std::string &target) = {
		createRobotomyRequestForm,
		createShrubberyCreationForm,
		createPresidentialPardonForm
	};
	
	std::string forms[3] = {
		"robotomy request", 
		"shrubbery creation", 
		"presidential pardon"
	};
	
	for (int i = 0; i < 3; i++) {
		if (form == forms[i]) {
			std::cout << "Intern creates " << form << std::endl;
			return ptrToFormFunc[i](target);
		}
	}
	std::cout << "Error: Form doesn’t exist" << std::endl;
	return (nullptr);
}