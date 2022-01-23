/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:16:33 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 13:04:52 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		void guardGate();
		void printStat();
		void printName();

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHp(void) const;
		unsigned int getEp(void) const;
		unsigned int getAd(void) const;

	private:
		std::string name;
		int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
};

#endif