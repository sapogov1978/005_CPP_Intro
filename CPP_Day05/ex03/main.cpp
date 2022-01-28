/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:26:17 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 17:53:05 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Form.hpp"
#include "Intern.hpp"

int main(void) {
	try {
		Intern intern1;
		Form *form;

		form = intern1.makeForm("RobotomyRequestForm", "Bender");
		std::cout << "Intern creates " << form->getFormName() << std::endl;
		std::cout << "For Bureucrat "<< form->getTarget() << std::endl;
		std::cout << *form << std::endl;

		form = intern1.makeForm("wrongForm", "Some_ONE_else");
		std::cout << "Intern creates " << form->getFormName() << std::endl;
		std::cout << "For Bureucrat " << form->getTarget() << std::endl;
		std::cout << *form << std::endl;

	}
	
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}