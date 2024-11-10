/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
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

class Form {
	private:
		static const int kMaxGrade = 1;
		static const int kMinGrade = 150;
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_exec;
	public:
		Form( const std::string &name, int grade_sign, int grade_exec );
		~Form();
		Form( const Form &src );
		Form &operator=( const Form &rhs );
		
		std::string const &getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void beSigned(const Bureaucrat &b);

		class GradeTooLowException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &os, const Form &Form);