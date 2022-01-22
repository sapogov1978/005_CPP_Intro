/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:23:12 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 15:01:15 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* Horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        std::ostringstream ss;
        ss << i;
        Horde[i].setName(name + ss.str());
	    Horde[i].announce();
    }
    return(Horde);
}