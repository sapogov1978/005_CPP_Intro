/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:07:52 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 14:46:22 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(int argc, char **argv) {
	
	int arrSize;

	if (argc == 1) {
		arrSize = 100;
	} else {
		arrSize = atoi(argv[1]);
	}
	
	int arrHalf = arrSize / 2;
	
	Animal *animalsArr[arrSize];

	for (int i = 0; i < arrSize; ++i) {
		if (i < arrHalf) {
			animalsArr[i] = new Cat();
		} else {
			animalsArr[i] = new Dog();
		}
		std::cout << "------------Created " << i << " ---------------" << std::endl;
	}
	for (int i = 0; i < arrSize; ++i) {
		delete animalsArr[i];
		std::cout << "---------- Cleared " << i << " -----------" << std::endl;
	}

	{
		Dog *dog1 = new Dog();
		std::cout << "------------- Dog1 Created --------------" << std::endl;
		Cat *cat1 = new Cat();
		std::cout << "------------- Cat1 Created --------------" << std::endl;
		Dog dog2 = Dog(*dog1);
		std::cout << "------------- Dog2 Created with deepcopy --------------" << std::endl;
		Cat cat2 = Cat(*cat1);
		std::cout << "------------- Cat2 Created with deepcopy --------------" << std::endl;
		delete dog1;
		std::cout << "---------- Cleared Dog 1 -----------" << std::endl;
		delete cat1;
		std::cout << "---------- Cleared Cat 1 -----------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------- Cat2 and Dog2  ----------" << std::endl;
		std::cout << "------ will be shoted at exit ------" << std::endl;
		std::cout << "--------- as stack objects ---------" << std::endl;
	}
	//for (;;) {}
	return (0);
}