/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:20:20 by brattles          #+#    #+#             */
/*   Updated: 2022/01/18 17:17:08 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Z_NAMES[8] = {	"GOOD",
							"BAD",
							"UGLY",
							"ANGEL EYES",
							"BLONDIE",
							"TUCO BENEDICTO PACIFICO JUAN MARIA RAMIREZ",
							"BARISTA A SORCORRO",
							"COLONEL DOUGLAS MORTIMER"};

int			Z_NAME_SIZE = (sizeof(Z_NAMES) / sizeof(std::string));

int main(void)
{
	srand(time(0));
	std::cout << std::endl;


	std::cout << "ZOMBIE ON HEAP (returning pointer): " << std::endl;
	randomChump(Z_NAMES[rand() % Z_NAME_SIZE]);

	std::cout << "ZOMBIE ON STACK: " << std::endl;
	Zombie stackZombie = Zombie(Z_NAMES[rand() % Z_NAME_SIZE]);
	stackZombie.announce();

	return (0);
}