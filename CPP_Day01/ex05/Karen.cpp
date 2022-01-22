/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:15:06 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 21:27:18 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::complain(std::string level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (stat[i].name == level)
		{
			(this->*(stat[i].ptr))();
		}
	}
}

Karen::Karen(void)
{
	init();
}

void Karen::init(void)
{
	stat[0].name = "DEBUG";
	stat[0].ptr = &Karen::debug;
	stat[1].name = "INFO";
	stat[1].ptr = &Karen::info;
	stat[2].name = "WARNING";
	stat[2].ptr = &Karen::warning;
	stat[3].name = "ERROR";
	stat[3].ptr = &Karen::error;
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}

Karen::~Karen(){}