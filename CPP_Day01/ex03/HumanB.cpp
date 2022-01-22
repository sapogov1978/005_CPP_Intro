/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:57 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 18:52:55 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wep = nullptr;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->wep = &weapon;
}

void HumanB::attack(void)
{
	if (wep != nullptr)
		std::cout << this->name << " attacks with his " << this->wep->getType() << std::endl;
	else
		std::cout << this->name << " can attack with dumb look only" << std::endl;
}