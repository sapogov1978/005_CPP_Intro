/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:24:21 by brattles          #+#    #+#             */
/*   Updated: 2022/01/18 17:04:24 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>


class Zombie
{
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie(void);

	private:
		std::string	name;

};

Zombie*	newZombie(std::string name);
void    randomChump(std::string name);

#endif