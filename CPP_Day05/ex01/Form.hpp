/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:01:44 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:50:27 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP_
# define FORM_HPP_

# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string FormName, int requiredGrade, int executedGrade);
		Form(const Form &target);
		Form &operator=(const Form &target);
		virtual ~Form();

		void beSigned(Bureaucrat &target);

		std::string getFormName() const;
		bool getIsSigned() const;
		int getRequiredGrade() const;
		int getExecuteGrade() const;

		class GradeTooHighException : public std::exception {
			public:
				const char *what(void) const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char *what(void) const throw();
		};

	private:
		std::string FormName;
		bool isSigned;
		int requiredGrade;
		int executedGrade;
};

std::ostream& operator<<(std::ostream &outputStream, const Form &ref);

#endif