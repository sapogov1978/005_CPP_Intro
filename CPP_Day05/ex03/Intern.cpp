/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:37:36 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 15:57:31 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

const char* Intern::UnknownForm::what() const throw() {
	return ("Unknown form");
}

Intern::Intern() { }

Intern::~Intern() {
	for(int i = 0; i < 3; i++)
		delete forms[i];
}

Intern::Intern(const Intern &target) {
	this->forms[0] = target.forms[0];
	this->forms[1] = target.forms[1];
	this->forms[2] = target.forms[2];
}

Intern &Intern::operator=(const Intern &target) {
    (void)target;
	return (*this);
}

Form *Intern::makeForm(const std::string formName, const std::string formTarget) {
	this->forms[0] = new ShrubberyCreationForm(formTarget);
	this->forms[1] = new RobotomyRequestForm(formTarget);
	this->forms[2] = new PresidentialPardonForm(formTarget);

	for(int i = 0; i < 3; i++) {
		if (formName == forms[i]->getFormName())
			return (forms[i]);
	}
	throw UnknownForm();
}