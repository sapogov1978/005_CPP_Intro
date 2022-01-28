/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:45:52 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 12:38:45 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "none", 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) { (void)PresidentialPardonForm; }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ShrubberyCreationForm) {
	(void)ShrubberyCreationForm;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) {
	std::cout << "[ PresidentialPardonForm: execute]" << std::endl;
	if (getIsSigned() == false)
		throw isNotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	pardon();
}

void PresidentialPardonForm::pardon() {
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}