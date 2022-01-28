/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:26:17 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:40:17 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		{
			Bureaucrat human("One", 3);
			std::cout << human << std::endl;

			Form project1("project 1", 3, 3);

			project1.beSigned(human);

			human.signForm(project1);

			std::cout << project1 << std::endl;
		}
		{
			Bureaucrat human("Two", 50);
			std::cout << human << std::endl;

			Form project1("project 2", 100, 3);

			project1.beSigned(human);

			human.signForm(project1);

			std::cout << project1 << std::endl;
		}
		{
			Bureaucrat human("Three", 50);
			std::cout << human << std::endl;

			Form project1("project 3", 3, 100);

			project1.beSigned(human);

			human.signForm(project1);

			std::cout << project1 << std::endl;
		}

	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}