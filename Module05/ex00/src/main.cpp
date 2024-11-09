/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:36:23 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 23:00:49 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("John", 10);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat invalid("Invalid", 0);
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try {
		Bureaucrat invalid("Invalid", 150);
		std::cout << invalid;
		invalid.decrementGrade();
		std::cout << invalid;
	} catch (const Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
