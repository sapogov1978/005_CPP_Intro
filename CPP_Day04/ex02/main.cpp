/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:07:52 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:39:43 by brattles         ###   ########.fr       */
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

	return (0);
}