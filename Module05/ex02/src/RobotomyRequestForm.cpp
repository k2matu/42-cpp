/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:23:33 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/09/18 23:58:53 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) : AForm("Robotomy Request Form", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm default constructor created " << this->_target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called for " << this->_target  << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ) : AForm(src), _target(src._target) {
	std::cout << "RobotomyRequestForm copy constructor created " << this->_target << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs ) {
	if (this != &rhs ) {
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	std::cout << "RobotomyRequestForm copy assignment operator created for " << this->_target << std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getSigned()) {
		throw FormNotSignedException();
	}
	if (executor.getGrade() > getGradeExec()) {
		throw GradeTooLowException();
	}
	std::cout << "Drrrrrilling drrrrr noise..." << std::endl;
	srand(time(0));
	int random = rand();
	if (random % 2 == 0) {
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << "robotomy failed" << std::endl;
	}
}
