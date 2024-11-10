/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/10 20:06:41 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		PresidentialPardonForm b("home");
		std::cout << b;
		Bureaucrat invalid("Invalid", 6);
		invalid.executeForm(b);
		std::cout << &b;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm b("home");
		std::cout << b;
		Bureaucrat valid("Valid", 3);
		valid.signForm(&b);
		valid.executeForm(b);
		std::cout << b;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		ShrubberyCreationForm a("apartment");
		std::cout << a;
		Bureaucrat valid("Valid", 100);
		valid.signForm(&a);
		valid.executeForm(a);
		std::cout << a;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		ShrubberyCreationForm a("apartment");
		std::cout << a;
		Bureaucrat invalid("Invalid", 145);
		invalid.signForm(&a);
		invalid.executeForm(a);
		std::cout << a;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
		try {
		RobotomyRequestForm a("apartment");
		std::cout << a;
		Bureaucrat valid("Valid", 30);
		valid.signForm(&a);
		valid.executeForm(a);
		std::cout << a;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		RobotomyRequestForm a("apartment");
		std::cout << a;
		Bureaucrat invalid("Invalid", 130);
		invalid.signForm(&a);
		invalid.executeForm(a);
		std::cout << a;
	} catch (const AForm::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const AForm::FormNotSignedException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}
