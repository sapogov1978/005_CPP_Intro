/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:37:40 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 15:53:43 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Intern {
	public:
		Intern(void);
		Intern(const Intern &_target);
		Intern &operator=(const Intern &_target);
		virtual ~Intern(void);

		Form *makeForm(std::string formName, std::string fromTarget);

		class UnknownForm : public std::exception {
			public:
				const char *what(void) const throw();
		};

	private:
		Form *forms[3];
};

#endif