/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:18:30 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 13:04:07 by brattles         ###   ########.fr       */
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

void ScavTrap::attack(std::string const &target) {
	if (hitPoint <= 0) {
		std::cout << "<" << "ScavTrap" << " \"" << name << "\"> looks dead... " << std::endl;
		return ;
	}
	if (energyPoint == 0) {
		std::cout << "<" << "ScavTrap" << " \"" << name << "\"> has no energy... " << std::endl;
		return ;
	}

	energyPoint -= 10;
	std::cout << "<" << "ScavTrap" << " \"" << name << "\"> attacks " << target << ", causing " << attackDamage << " points of damage! (energyPoint: " << energyPoint << ")" << std::endl;
}
