/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:46:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 12:40:41 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "none", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) { (void)RobotomyRequestForm; }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm) {
	(void)RobotomyRequestForm;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) {
	std::cout << "[ RobotomyRequestForm: execute]" << std::endl;
	if (getIsSigned() == false)
		throw isNotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	Robotization();
}

void RobotomyRequestForm::Robotization() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1);
	std::cout << "Pr. Pr. PPr!" << std::endl;
	if (dis(gen) == 0) {
		std::cout << Form::getTarget() << " has become a robot." << std::endl;
	} else {
		std::cout << "Fail.... :(" << std::endl;
	}
}