/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:23:36 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:49:09 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H_
# define CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &target);
		Cat &operator=(const Cat &target);
		~Cat();
		
		void makeSound();
		std::string getType();

	private:
		Brain *Brain;
};

#endif