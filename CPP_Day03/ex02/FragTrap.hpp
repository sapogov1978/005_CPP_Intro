/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:16:42 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 20:17:10 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H_
# define FRAGTRAP_H_

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &target);
		FragTrap &operator= (const FragTrap &target);
		~FragTrap();

		void highFivesGuys();
		
	private:
		std::string name;
};

#endif