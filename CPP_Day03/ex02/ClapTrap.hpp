/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:43 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 20:15:58 by brattles         ###   ########.fr       */
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
	ClapTrap(std::string const name);
	ClapTrap(const ClapTrap &target);
	ClapTrap &operator= (const ClapTrap &target);
	virtual ~ClapTrap();

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

	void printName(void);
};

#endif