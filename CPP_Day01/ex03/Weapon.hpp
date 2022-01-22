/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 21:41:06 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class	Weapon
{
	public:
		const std::string& getType(void);
		void setType(std::string name);
		Weapon(std::string name);

	private:
		std::string weapon;
};

#endif