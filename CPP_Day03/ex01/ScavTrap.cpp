/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:18:30 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 19:36:58 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "[ ScavTrap created ]" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "[ ScavTrap \"" << name << "\" created ]" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ ScavTrap \"" << name << "\" destroyed ]" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "[ ScavTrap \"" << name << "\" entered gate keeper ]" << std::endl;
}