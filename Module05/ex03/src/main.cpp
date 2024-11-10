/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/10 22:25:49 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main() {
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		try {
			std::cout << *rrf;
			Bureaucrat valid("Valid", 3);
			valid.signForm(rrf);
			valid.executeForm(*rrf);
			std::cout << *rrf;
		} catch (const AForm::GradeTooHighException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::GradeTooLowException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::FormNotSignedException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		delete rrf;
	}
	std::cout << std::endl;
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		try {
			std::cout << *rrf;
			Bureaucrat valid("Valid", 3);
			valid.signForm(rrf);
			valid.executeForm(*rrf);
			std::cout << *rrf;
		} catch (const AForm::GradeTooHighException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::GradeTooLowException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::FormNotSignedException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		delete rrf;
	}
	std::cout << std::endl;
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		try {
			std::cout << *rrf;
			Bureaucrat valid("Valid", 3);
			valid.signForm(rrf);
			valid.executeForm(*rrf);
			std::cout << *rrf;
		} catch (const AForm::GradeTooHighException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::GradeTooLowException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		} catch (const AForm::FormNotSignedException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		delete rrf;
	}
	std::cout << std::endl;
	
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("wrongform", "Bender");
		delete rrf;
	}
	std::cout << std::endl;
}
