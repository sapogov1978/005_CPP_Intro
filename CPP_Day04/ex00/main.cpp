/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:07:52 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:48:32 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

int main(void)
{
	// Animal
	std::cout << "--------- Animal ---------" << std::endl;
	{
		Animal* meta = new Animal();
		Animal* j = new Dog();
		Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound(); //will output the abstract sound!

		delete meta;
		delete j;
		delete i;
	}

	// WrongAnimal
	std::cout << "--------- WrongAnimal ---------" << std::endl;
	{
		WrongAnimal* meta = new WrongAnimal();
		WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
	}

	return (0);
}