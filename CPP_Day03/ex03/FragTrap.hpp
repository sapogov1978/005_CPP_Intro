/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:42 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:18:50 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP_
# define FRAGTRAP_HPP_

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &target);
		FragTrap &operator= (const FragTrap &target);

		void highFivesGuys();
		void printName();

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getHp(void) const;
		unsigned int getEp(void) const;
		unsigned int getAd(void) const;
		virtual std::string GetClapName() const;

	private:
		std::string name;
		int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
};

#endif