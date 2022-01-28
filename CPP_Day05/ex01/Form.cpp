/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:01:51 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:26:40 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return ("[Grade Too High Exception]\nGrade 1 is the highest, you can't raise your grade.");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("[Grade Too Low Exception]\nGrade 150 is the lowest, you can't lower your grade.");
}

Form::Form() {
	this->isSigned = 0;
	this->requiredGrade = 0;
	this->executedGrade = 0;
}

Form::Form(std::string FormName, int requiredGrade, int executedGrade) {
	this->isSigned = 0;
	this->FormName = FormName;
	if (requiredGrade < 1 || executedGrade < 1 )
		throw GradeTooHighException();
	else if (requiredGrade > 150 || executedGrade > 150 )
		throw GradeTooLowException();

	this->requiredGrade = requiredGrade;
	this->executedGrade = executedGrade;
}

Form::~Form() { }

Form::Form(const Form &target) {
	this->FormName = target.FormName;
	this->isSigned = target.isSigned;
	this->executedGrade = target.executedGrade;
	this->requiredGrade = target.requiredGrade;
}

Form &Form::operator=(const Form &target) {
	this->FormName = target.FormName;
	this->isSigned = target.isSigned;
	this->executedGrade = target.executedGrade;
	this->requiredGrade = target.requiredGrade;
	return (*this);
}

std::string Form::getFormName() const {
	return (this->FormName);
}

bool Form::getIsSigned() const {
	return (this->isSigned);
}

int Form::getRequiredGrade() const {
	return (this->requiredGrade);
}

int Form::getExecuteGrade() const {
	return (this->executedGrade);
}

void Form::beSigned(Bureaucrat &target) {
	if (target.getGrade() <= requiredGrade && target.getGrade() <= executedGrade)
		this->isSigned = 1;
}

std::ostream& operator<<(std::ostream &outputStream, const Form &ref) {
	outputStream << "[ " << ref.getFormName() << " ]" << std::endl
	<< "Required grade: " << ref.getRequiredGrade()  << std::endl
	<< "Executed grade: " << ref.getExecuteGrade()  << std::endl;
	return (outputStream);
}
