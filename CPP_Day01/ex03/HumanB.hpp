/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:38:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 18:53:07 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
    public:
	    HumanB(std::string name);
	    void setWeapon(Weapon& weapon);
	    void attack(void);

    private:
	    std::string name;
		Weapon* wep;
};

#endif