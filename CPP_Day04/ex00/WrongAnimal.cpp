/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:38:12 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:40:28 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() {
	return (type);
}

WrongAnimal::WrongAnimal() : type("UNICORN") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &target) {
	this->type = target.type;
	return (*this);
};

void WrongAnimal::makeSound() {
	std::cout <<"WRONG ANIMALS HAVE NO RIGHT TO TALK" << std::endl;
}