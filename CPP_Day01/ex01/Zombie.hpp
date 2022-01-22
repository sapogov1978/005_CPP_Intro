/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:24:21 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 15:29:45 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <sstream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void	setName(std::string name){
			this->name = name;
		}
		void	announce(void);
		~Zombie(void);

	private:
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif