/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:15:45 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:49:30 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H_
# define ANIMAL_H_

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &target) {
			type = target.type;
		};
		Animal& operator= (const Animal &target);

		virtual void makeSound();
		virtual std::string getType();

	protected:
		std::string type;

};

#endif