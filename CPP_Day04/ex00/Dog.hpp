/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:29:30 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 14:23:49 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H_
# define DOG_H_

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog :  public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &target);
		Dog& operator=(const Dog &target);

		std::string getType();
		void makeSound();

	protected:
		std::string type;
};

#endif