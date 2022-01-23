/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/22 22:07:11 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap claptrap("Death star");

	claptrap.attack("Alderaan");
	claptrap.takeDamage(8);
	claptrap.takeDamage(3);
	claptrap.beRepaired(30);
	claptrap.attack("Alderaan");

	return (0);
}