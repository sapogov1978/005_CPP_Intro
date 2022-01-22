/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:20:20 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 15:31:42 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string name = "Zzzombie";
	std::string	z_qty;
	int			N;
	Zombie*		Horde;

	std::cout << "How big is a horde? >> ";
	getline(std::cin, z_qty);
	if (feof(stdin)) {
		exit (EXIT_SUCCESS);
	}
	N = atoi(z_qty.c_str());
	if (N < 0) {
		std::cout << "Well... try to imagine 'nothing' or 'too much' and be a little bit clever next time" << std::endl;
		exit (EXIT_FAILURE);
	}

	Horde = zombieHorde(N, name);
	std::cout << "Pointer to first zombie: " << Horde << std::endl;
	delete[] Horde;

	return (0);
}