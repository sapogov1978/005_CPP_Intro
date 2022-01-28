/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:46:07 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 12:41:02 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "none", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) { (void)ShrubberyCreationForm; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm) {
	(void)ShrubberyCreationForm;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	 std::cout << "[ ShrubberyCreationForm: execute ]" << std::endl;
	if (getIsSigned() == false)
		throw isNotSigned();
	if (getExecuteGrade() < executor.getGrade())
		throw LowGrade();
	makeTree();
}

void ShrubberyCreationForm::makeTree() {
	std::string filename = getTarget().append("_shrubbery");
	std::ifstream readFile;
	std::ofstream writeFile(filename);

	writeFile << "          *\n" 
                 "         /|\\\n"
                 "        /*|O\\\n"
                 "       /*/|\\*\\\n"
                 "      /X/O|*\\X\\\n"
                 "     /*/X/|\\X\\*\\\n"
                 "    /O/*/X|*\\O\\X\\\n"
                 "   /*/O/X/|\\X\\O\\*\\\n"
                 "  /X/O/*/X|O\\X\\*\\O\\\n"
                 " /O/X/*/O/|\\X\\*\\O\\X\\\n"
                 "         |X|\n"
                 "         |X|\n";

	writeFile.close();
}