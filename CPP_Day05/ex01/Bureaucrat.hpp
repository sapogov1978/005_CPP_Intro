/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:22:14 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:50:06 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP_
# define BUREAUCRAT_HPP_

#include "Form.hpp"

# include <string>
# include <iostream>
# include <exception>

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &target);
		Bureaucrat &operator=(const Bureaucrat &target);
		virtual ~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void setIncreaseGrade();
		void setDecreaseGrade();
		void signForm(Form &form);

	class GradeTooHighException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char *what(void) const throw();
	};

	private:
		const std::string name;
		int grade;

};

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref);

#endif