/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:38 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 12:40:07 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "((( FragTrap created )))" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "(( FragTrap \"" << name << "\" created ))" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "(( FragTrap \"" << name << "\" destroyed ))" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "(( FragTrap \"" << name << "\" gives a high five ))" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	if (hitPoint <= 0)
	{
		printName();
		std::cout << " looks dead... " << std::endl;
		return ;
	}
	if (energyPoint == 0)
	{
		printName();
		std::cout << " has no energy... " << std::endl;
		return ;
	}

	energyPoint -= 10;
	printName();
	std::cout <<" attacks " << target << ", causing " << attackDamage << " points of damage! (energyPoint: " << energyPoint << ")" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount;
	if (hitPoint < 0)
		hitPoint = 0;
	printName();
	std::cout <<" takes " << amount << ", points of damage! (HP: " << hitPoint << ")" << std::endl;

}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoint += amount;

	printName();
	std::cout <<" has been repaired by " << amount << ", (HP: " << hitPoint << ")" << std::endl;
}

void FragTrap::printName()
{
	std::cout << "((" << " FragTrap \"" << name << "\" ))";
}