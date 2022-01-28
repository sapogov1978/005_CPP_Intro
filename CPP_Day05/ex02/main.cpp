/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:26:17 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 16:03:49 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main(void) {
	try {
		Bureaucrat human("One", 4);
		ShrubberyCreationForm myTree("tree");
		RobotomyRequestForm robotomy("Bender");
		PresidentialPardonForm pardon("Navalny");

		std::cout << human << std::endl;
		std::cout << robotomy << std::endl;
		std::cout << myTree << std::endl;
		std::cout << pardon << std::endl;

		myTree.beSigned(human);
		robotomy.beSigned(human);
		pardon.beSigned(human);

		human.signForm(myTree);
		human.signForm(robotomy);
		human.signForm(pardon);

		myTree.execute(human);
		robotomy.execute(human);
		pardon.execute(human);
	}
	
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}