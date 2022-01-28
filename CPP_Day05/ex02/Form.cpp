/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:01:51 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 12:22:43 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw() {
	return ("[Grade Too High Exception]\nGrade 1 is the highest, you can't raise your grade.");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest, you can't lower your grade.");
}

const char* Form::isNotSigned::what() const throw() {
	return ("Form not signed");
}

const char* Form::LowGrade::what() const throw() {
	return ("The execution rating is too low.");
}

Form::Form() {
	this->isSigned = 0;
	this->requiredGrade = 0;
	this->executedGrade = 0;
}

Form::Form(std::string formName, const std::string formTarget, int requiredGrade, int executedGrade) {
	this->isSigned = 0;
	this->formName = formName;
	if (requiredGrade < 1 || executedGrade < 1 )
		throw GradeTooHighException();
	else if (requiredGrade > 150 || executedGrade > 150 )
		throw GradeTooLowException();

	this->requiredGrade = requiredGrade;
	this->executedGrade = executedGrade;
	this->formTarget = formTarget;
}

Form::~Form() { }

Form::Form(const Form &target) {
	this->formName = target.formName;
	this->isSigned = target.isSigned;
	this->executedGrade = target.executedGrade;
	this->requiredGrade = target.requiredGrade;
}

Form &Form::operator=(const Form &target) {
	this->formName = target.formName;
	this->isSigned = target.isSigned;
	this->executedGrade = target.executedGrade;
	this->requiredGrade = target.requiredGrade;
	return (*this);
}

std::string Form::getFormName() const {
	return (this->formName);
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

std::string Form::getTarget() const {
	return(this->formTarget);
}

void Form::beSigned(Bureaucrat &target) {
	if (target.getGrade() <= requiredGrade)
		this->isSigned = 1;
}

void Form::execute(Bureaucrat const &executor) { (void)executor; }

std::ostream& operator<<(std::ostream &outputStream, const Form &ref) {
	outputStream << "[ " << ref.getFormName() << " ]" << std::endl
	<< "Required grade : " << ref.getRequiredGrade()  << std::endl
	<< "Executed grade : " << ref.getExecuteGrade()  << std::endl;
	return (outputStream);
}