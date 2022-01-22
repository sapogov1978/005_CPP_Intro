/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:52 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 17:29:59 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), wep(weapon) { }

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->wep.getType() << std::endl;
}