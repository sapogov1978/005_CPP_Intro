/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:09 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:24:13 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap() {
	this->name = ClapTrap::GetName() + "_claptrap_name";
	this->hitPoint = FragTrap::getHp();
	this->energyPoint = ScavTrap::getEp();
	this->attackDamage = FragTrap::getAd();
	std::cout << "*** DiamondTrap is created. ***" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->name = name;
	this->name = ClapTrap::GetName() + "_claptrap_name";
	this->hitPoint = FragTrap::getHp();
	this->energyPoint = ScavTrap::getEp();
	this->attackDamage = FragTrap::getAd();
	std::cout << "** DiamondTrap \"" << this->name << "\" created **" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	if (name != "") {
		std::cout << "** DiamondTrap \"" << name << "\" destroyed **" << std::endl;
	} else {
		std::cout << "*** DiamondTrap is destroyed. ***" << std::endl;
	}
}

DiamondTrap::DiamondTrap(const DiamondTrap &target) {
	this->name = target.name;
	this->hitPoint = target.hitPoint;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &target) {
	this->name = target.name;
	this->hitPoint = target.hitPoint;
	this->energyPoint = target.energyPoint;
	this->attackDamage = target.attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "*** whoAmI? : My name is \"" << name << "\" and my claptrap name is " <<  ClapTrap::GetName() << " ***" << std::endl;
}