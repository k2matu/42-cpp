/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name) {
	if (grade < kMaxGrade) {
		throw GradeTooHighException();
	} else if (grade > kMinGrade) {
		throw GradeTooLowException();
	} else {
		this->_grade = grade;
	}
	std::cout << "Bureaucrat default constructor created " << getName() << ", grade " << getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called for " << getName() << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &src ) : _name(src._name), _grade(src._grade) {
	std::cout << "Bureaucrat copy constructor created " << getName() << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &rhs ) {
	if (this != &rhs ) {
		this->_grade = rhs._grade;
	}
	std::cout << "Bureaucrat copy assignment operator created for " << getName() << ", grade " << getGrade()  << std::endl;
	return (*this);
}

std::string const &Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::incrementGrade() {
	if ((this->_grade - 1) < kMaxGrade) {
		throw GradeTooHighException();
	} else {
		this->_grade--;
	}
}

void Bureaucrat::decrementGrade() {
	if ((this->_grade + 1) > kMinGrade) {
		throw GradeTooLowException();
	} else {
		this->_grade++;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const noexcept {
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const noexcept {
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (os);
}