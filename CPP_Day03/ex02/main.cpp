/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 12:39:19 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap FragTrap("R2-D2");

	FragTrap.attack("C-3PO");
	FragTrap.takeDamage(80);
	FragTrap.beRepaired(30);
	FragTrap.highFivesGuys();
	
	return (0);
}