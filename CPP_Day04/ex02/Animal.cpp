/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:18:51 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 10:11:57 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "";
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const { }

std::string Animal::getType() const {
	return (this->type);
}

Animal &Animal::operator=(const Animal &target) {
	std::cout << "Aniaml assignation operator called" << std::endl;
	(void)target;
	return (*this);
}

Animal::Animal(const Animal &target) {
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = "";
	(void)target;
}