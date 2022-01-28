/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:31:34 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 12:50:36 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
	this->Brain = new class Brain();
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete this->Brain;
}

void Dog::makeSound() {
	std::cout << "BOW WOW! BOW WOW! BOW WOW!" << std::endl;
}

std::string Dog::getType() {
	return (this->type);
}

Dog &Dog::operator=(Dog const &target) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (&target != this) {
		this->Brain = new class Brain(*target.Brain);
		this->type = target.type;
	}
	return (*this);
}

Dog::Dog(const Dog &target) : Animal(target) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->Brain = new class Brain(*target.Brain);
	this->type = target.type;
}