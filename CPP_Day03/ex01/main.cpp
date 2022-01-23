/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/22 22:31:56 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap ScavTrap("Rebelions");

	ScavTrap.attack("Dart Vader");
	ScavTrap.takeDamage(80);
	ScavTrap.beRepaired(30);
	ScavTrap.guardGate();

	for (int i=0; i<11; i++){
		ScavTrap.attack("Dart Vader");
	}

	return (0);
}