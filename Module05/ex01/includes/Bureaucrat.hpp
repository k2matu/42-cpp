/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:11:29 by kmatjuhi          #+#    #+#             */
/*   Updated: 2024/11/09 21:12:54 by kmatjuhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		static const int kMaxGrade = 1;
		static const int kMinGrade = 150;
		const std::string _name;
		int _grade;
	public:
		Bureaucrat( std::string const &name, int grade );
		~Bureaucrat();
		Bureaucrat( const Bureaucrat &src );
		Bureaucrat &operator=( const Bureaucrat &rhs );
		
		std::string const &getName() const;
		int getGrade() const;
		
		void incrementGrade();
		void decrementGrade();
		void signForm(Form *f);
		
		class GradeTooLowException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*	what() const noexcept override;
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);