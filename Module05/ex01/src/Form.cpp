/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string &name, int grade_sign, int grade_exec ) 
	: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
	if (grade_sign < kMaxGrade || grade_exec < kMaxGrade) {
		throw GradeTooHighException();
	}
	if (grade_sign > kMinGrade || grade_exec > kMinGrade) {
		throw GradeTooLowException();
	}
	std::cout << "Form default constructor created " << getName() << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called for " << getName() << std::endl;
}

Form::Form( const Form &src ) : _name(src._name), _signed(src._signed), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec) {
	std::cout << "Form copy constructor created " << getName() << std::endl;
}

Form &Form::operator=( const Form &rhs ) {
	if (this != &rhs ) {
		this->_signed = rhs._signed;
	}
	std::cout << "Form copy assignment operator created for " << getName() << std::endl;
	return (*this);
}

std::string const &Form::getName() const {
	return (this->_name);
}

bool Form::getSigned() const {
	return (this->_signed);
}

int Form::getGradeSign() const {
	return (this->_grade_sign);
}

int Form::getGradeExec() const {
	return (this->_grade_exec);
}

void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > getGradeSign()) {
		throw GradeTooLowException();
	}
	this->_signed = true;
}

const char *Form::GradeTooHighException::what() const noexcept {
	return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const noexcept {
	return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &Form) {
	os << "Form: " << Form.getName() 
	<< ", Signed: " << (Form.getSigned() ? "Yes" : "No")
	<< ", Grade Sign: "<< Form.getGradeSign() 
	<< ", Grade Exec: " << Form.getGradeExec()
	<< std::endl;
	return (os);
}