/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                     :+:      :+:    :+:   */
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
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( const std::string &target );
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &rhs );

		void execute(Bureaucrat const & executor) const override;
};