/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:16:33 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 20:16:23 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &target);
		ScavTrap &operator= (const ScavTrap &target);
		~ScavTrap();

		void guardGate();
		
		//void printName();
		//void attack(std::string const &target);
		//void takeDamage(unsigned int amount);
		//void beRepaired(unsigned int amount);

	private:
		std::string name;
};

#endif