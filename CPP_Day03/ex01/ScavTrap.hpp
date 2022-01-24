/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:16:33 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 19:32:31 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H_
# define SCAVTRAP_H_

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
		
	private:
		std::string name;
};

#endif