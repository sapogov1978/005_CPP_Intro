/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:33:55 by brattles          #+#    #+#             */
/*   Updated: 2022/01/18 17:20:19 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *new_zombie;

	new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
	std::cout << "Memory released" << std::endl << std::endl;
}