/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:55 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 17:27:22 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& wep);
		void attack(void);

	private:
		std::string name;
		Weapon& wep;
};

#endif