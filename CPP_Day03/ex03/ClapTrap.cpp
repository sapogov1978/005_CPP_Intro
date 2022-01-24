/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:31 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:05:33 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "<<< ClapTrap created >>>" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "<< ClapTrap \"" << name << "\" created >>" << std::endl;
}

ClapTrap::~ClapTrap() {
	if (name != "") {
		std::cout << "<< ClapTrap \"" << name << "\" destroyed >>" << std::endl;
	} else {
		std::cout << "<<< ClapTrap destroyed >>>" << std::endl;
	}
}

ClapTrap::ClapTrap(const ClapTrap &target) {
	this->name = target.name;
	this->hitPoint = target.hitPoint;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &target) {
	this->name = target.name;
	this->hitPoint = target.hitPoint;
	this->energyPoint = target.energyPoint;
	this->attackDamage = target.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target) {
	if (hitPoint <= 0) {
		printName();
		std::cout << " looks dead... " << std::endl;
		return ;
	}
	if (energyPoint == 0) {
		printName();
		std::cout << " has no energy... " << std::endl;
		return ;
	}

	energyPoint -= 10;
	printName();
	std::cout << "attacks " << target << ", causing " << attackDamage << " points of damage! (energyPoint: " << energyPoint << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoint -= amount;
	if (hitPoint < 0)
		hitPoint = 0;
	printName();
	std::cout <<"takes " << amount << " points of damage! (HP: " << hitPoint << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitPoint += amount;
	printName();
	std::cout << "repaired with " << amount << ", " << "(HP: " << hitPoint << ")" << std::endl;
}

void ClapTrap::printName() {
	std::cout << "< ClapTrap \"" << name << "\"> ";
}

int ClapTrap::getHp() const {
	return (hitPoint);
}

unsigned int ClapTrap::getEp() const {
	return (energyPoint);
}

unsigned int ClapTrap::getAd() const {
	return (attackDamage);
}

std::string ClapTrap::GetName() const {
	return this->name;
}