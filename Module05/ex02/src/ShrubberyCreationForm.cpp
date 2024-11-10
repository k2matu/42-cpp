/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void print_trees( const std::string target ) {
	std::ofstream file(target + "_shrubbery");
	if (file.is_open()) {
		file << "ASCII Trees" << std::endl;
        file << "    ^    " << std::endl;
        file << "   ^^^   " << std::endl;
        file << "  ^^^^^  " << std::endl;
        file << " ^^^^^^^ " << std::endl;
        std::cout << "Shrubbery created at " << target << std::endl;
	} else {
		std::cerr << "Error creating shrubbery file" << std::endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target ) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm default constructor created " << this->_target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called for " << this->_target  << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : AForm(src), _target(src._target) {
	std::cout << "ShrubberyCreationForm copy constructor created " << this->_target << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs ) {
	if (this != &rhs ) {
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	std::cout << "ShrubberyCreationForm copy assignment operator created for " << this->_target << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getSigned()) {
		throw FormNotSignedException();
	}
	if (executor.getGrade() > getGradeExec()) {
		throw GradeTooLowException();
	}
	print_trees(this->_target);
}
