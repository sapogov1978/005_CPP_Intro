/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:29:30 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:49:27 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H_
# define GOD_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &target);
		Dog &operator=(Dog const &target);
		~Dog();
		
		void makeSound();
		std::string getType();

	private:
		Brain *Brain;

};

#endif