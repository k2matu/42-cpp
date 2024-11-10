/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:29 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/08 23:20:13 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		static const int kMaxGrade = 1;
		static const int kMinGrade = 150;
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_exec;
	public:
		AForm( const std::string &name, int grade_sign, int grade_exec );
		virtual ~AForm();
		AForm( const AForm &src );
		AForm &operator=( const AForm &rhs );
		
		std::string const &getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooLowException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};
		
			class FormNotSignedException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);