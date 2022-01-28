/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:26:32 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:50:26 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
	this->Brain = new class Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete this->Brain;
}

void Cat::makeSound() {
	std::cout << "MEOW! MEOW! MEOW!" << std::endl;
}

std::string Cat::getType() {
	return (this->type);
}

Cat &Cat::operator=(Cat const &target) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (&target != this) {
		this->Brain = new class Brain(*target.Brain);
		this->type = target.type;
	}
	return (*this);
}

Cat::Cat(const Cat &target) : Animal(target) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->Brain = new class Brain(*target.Brain);
	this->type = target.type;
}