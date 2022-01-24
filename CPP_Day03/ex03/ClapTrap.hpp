/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:43 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 14:16:21 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CLAPTRAP_H_
# define _CLAPTRAP_H_

#include <iostream>
#include <string>

class ClapTrap
{
public :
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &target);
	virtual ~ClapTrap();

	ClapTrap &operator= (const ClapTrap &target);

	virtual void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void printName(void);

	int getHp(void) const;
	unsigned int getEp(void) const;
	unsigned int getAd(void) const;
	std::string GetName() const;

protected:
	std::string name;
	int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;
};

#endif