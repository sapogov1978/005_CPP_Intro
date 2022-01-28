/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:46:10 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 23:59:34 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP_
# define SHRUBBERYCREATIONFORM_HPP_

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <fstream>
# include <iostream>

class Bureaucrat;

// Required grades: sign 145, exec 137
class ShrubberyCreationForm : public virtual Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
 		ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor);

	private:
		void makeTree();
};

#endif