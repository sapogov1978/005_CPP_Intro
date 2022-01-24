/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:38 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:14:30 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "((( FragTrap created )))" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "(( FragTrap \"" << name << "\" created ))" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "(( FragTrap \"" << name << "\" destroyed ))" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "(( FragTrap \"" << name << "\" gives a high five ))" << std::endl;
}