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

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &target);
		FragTrap &operator= (const FragTrap &target);
		virtual ~FragTrap();

		void highFivesGuys();
		
	protected:
		std::string name;
};

#endif