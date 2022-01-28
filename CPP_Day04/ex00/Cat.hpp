/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:23:36 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:51:38 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H_
# define CAT_H_

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat :  public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &target);
		Cat& operator=(const Cat &target);

		std::string getType();
		void makeSound();

	protected:
		std::string type;
};

#endif