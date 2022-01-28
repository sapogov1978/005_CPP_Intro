/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:29:30 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 14:42:54 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H_
# define DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
	public:
		Dog();
		Dog(Dog const &target);
		Dog &operator=(Dog const &target);
		~Dog();
		
		virtual void makeSound() const;
		std::string getType() const;

	private:
		Brain *Brain;

};

#endif