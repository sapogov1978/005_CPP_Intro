/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:15:45 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 10:03:05 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H_
# define ANIMAL_H_

# include <string>
# include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &target);
		Animal& operator=(const Animal &target);
		virtual ~Animal();
		
		virtual void makeSound() const;
		virtual std::string getType() const;

	protected:
		std::string type;
};

#endif