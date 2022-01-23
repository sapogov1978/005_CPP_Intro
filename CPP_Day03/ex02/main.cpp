/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:01:50 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 12:39:19 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap st("R2-D2");

	st.attack("C-3PO");
	st.takeDamage(80);
	st.beRepaired(30);

	st.highFivesGuys();
	return (0);
}