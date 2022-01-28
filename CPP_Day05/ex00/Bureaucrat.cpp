/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:17:38 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:29:38 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("[Grade Too High Exception]\nGrade 1 is the highest, you can't raise your grade.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("[Grade Too Low Exception]\nThe grade 150 is the lowest, you can't lower your grade.");
}

Bureaucrat::Bureaucrat() {
	this->grade = 0;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat &target) : name(target.name) {
	this->grade = target.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &target) {
	this->grade = target.grade;
	return(*this);
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::setIncreaseGrade() {
	if (grade > 1)
		grade--;
	else if (grade == 1)
		throw GradeTooHighException();
}

void Bureaucrat::setDecreaseGrade() {
	if (grade < 150)
		grade++;
	else if (grade == 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &outputStream, const Bureaucrat &ref) {
	outputStream << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return (outputStream);
}
