/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/09 21:47:27 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
	try {
		Form b("House", 150, 20);
		std::cout << b;
	} catch (const Form::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Form b("Apartment", 0, 20);
		std::cout << b;
	} catch (const Form::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Form c("Apartment 2", 1, 20);
		std::cout << c;
		Bureaucrat invalid("Invalid", 6);
		invalid.signForm(&c);
		std::cout << c;
	} catch (const Form::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Form c("Apartment 3", 10, 20);
		std::cout << c;
		Bureaucrat valid("Valid", 6);
		valid.signForm(&c);
;		std::cout << c;
	} catch (const Form::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Form::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}
