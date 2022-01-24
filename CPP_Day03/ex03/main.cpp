/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 13:41:08 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap DiamondTrap("Jedi Knights");

	DiamondTrap.whoAmI();
	DiamondTrap.attack("------AAAAAAAA------");
	DiamondTrap.guardGate();
	DiamondTrap.highFivesGuys();
	
	return (0);
}