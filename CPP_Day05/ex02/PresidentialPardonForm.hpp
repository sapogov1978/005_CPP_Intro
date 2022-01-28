/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:45:55 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 11:53:58 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP_
# define PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <fstream>
# include <iostream>
# include <cstdlib>
# include <ctime>

class Bureaucrat;

//  Required grades: sign 25, exec 5
class PresidentialPardonForm: public virtual Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &PresidentialPardonForm);
    ~PresidentialPardonForm();

	void execute(Bureaucrat const &executor);

private:
	void pardon();
};

#endif