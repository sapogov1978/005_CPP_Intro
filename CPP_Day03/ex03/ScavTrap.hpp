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

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap &target);
		ScavTrap &operator= (const ScavTrap &target);

		void guardGate();
		
		virtual void attack(std::string const &target);

	protected:
		std::string name;
};

#endif