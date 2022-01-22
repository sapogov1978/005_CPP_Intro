/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:30:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/18 17:16:31 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << "> " << "diiiiiieeeeeed" << std::endl << std::endl;
}