/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:18:51 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:22:29 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() {
	return (type);
}

Animal::Animal() : type("none") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator= (const Animal &target) {
	this->type = target.type;
    return (*this);
}

void Animal::makeSound() {
	std::cout << "ABSTRACT ANIMAL IS MUTE" << std::endl;
}