/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:42:05 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:26:24 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP_
# define DIAMONDTRAP_HPP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &target);
		~DiamondTrap();
		DiamondTrap &operator= (const DiamondTrap &target);

		int getHp(void) const;
		unsigned int getEp(void) const;
		unsigned int getAd(void) const;

		void whoAmI();

	private:
		std::string name;
		int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
};

#endif