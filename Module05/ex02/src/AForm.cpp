/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( const std::string &name, int grade_sign, int grade_exec ) 
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
	if (grade_sign < kMaxGrade || grade_exec < kMaxGrade) {
		throw GradeTooHighException();
	}
	if (grade_sign > kMinGrade || grade_exec > kMinGrade) {
		throw GradeTooLowException();
	}
	std::cout << "AForm default constructor created " << getName() << std::endl;
}

AForm::~AForm() {
	std::cout << "AForm destructor called for " << getName() << std::endl;
}

AForm::AForm( const AForm &src ) : _name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec) {
	std::cout << "AForm copy constructor created " << getName() << std::endl;
}

AForm &AForm::operator=( const AForm &rhs ) {
	if (this != &rhs ) {
		this->_signed = rhs._signed;
	}
	std::cout << "AForm copy assignment operator created for " << getName() << std::endl;
	return (*this);
}

std::string const &AForm::getName() const {
	return (this->_name);
}

bool AForm::getSigned() const {
	return (this->_signed);
}

int AForm::getGradeSign() const {
	return (this->_grade_sign);
}

int AForm::getGradeExec() const {
	return (this->_grade_exec);
}

void AForm::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > getGradeSign()) {
		throw GradeTooLowException();
	}
	this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const noexcept {
	return "Grade is too high!";
}

const char *AForm::GradeTooLowException::what() const noexcept {
	return "Grade is too low!";
}

const char *AForm::FormNotSignedException::what() const noexcept {
	return "Form is not signed!";
}

std::ostream &operator<<(std::ostream &os, const AForm &Form) {
	os << "AForm: " << Form.getName() 
	<< ", Signed: " << (Form.getSigned() ? "Yes" : "No")
	<< ", Grade Sign: "<< Form.getGradeSign() 
	<< ", Grade Exec: " << Form.getGradeExec()
	<< std::endl;
	return (os);
}