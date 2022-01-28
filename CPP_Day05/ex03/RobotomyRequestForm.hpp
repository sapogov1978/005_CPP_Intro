/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:46:03 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 17:43:07 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP_
# define ROBOTOMYREQUESTFORM_HPP_

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <fstream>
# include <iostream>
# include <random>

class Bureaucrat;

// Required grades: sign 72, exec 45
class RobotomyRequestForm: public virtual Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &RobotomyRequestForm);
		virtual ~RobotomyRequestForm();

		void execute(Bureaucrat const &executor);

	private:
		void Robotization();
};

#endif