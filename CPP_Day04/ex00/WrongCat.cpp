/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:43:46 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:45:16 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() {
	std::cout << "WRONG MEOW! WRONG MEOW!" << std::endl;
}

std::string WrongCat::getType() {
	return (type);
}