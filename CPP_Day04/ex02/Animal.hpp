/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:15:45 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:35:27 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H_
# define ANIMAL_H_

# include <string>
# include <iostream>

class Animal {
	public:
		Animal() { };
		Animal(const Animal &target) { (void)target; };
		virtual ~Animal() { };
		
		virtual void makeSound() = 0;
		virtual std::string getType() = 0;

	protected:
		std::string type;
};


#endif