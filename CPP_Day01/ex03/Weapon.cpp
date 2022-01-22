/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:47 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 21:33:24 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->weapon = weapon_name;
}
const std::string& Weapon::getType(void)
{
	return (weapon);
}

void Weapon::setType(std::string weapon_name)
{
	this->weapon = weapon_name;
}