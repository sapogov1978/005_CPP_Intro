/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:41:16 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:52:17 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGCAT_H_
# define WRONGCAT_H_

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat :  public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &target);
		WrongCat& operator=(const WrongCat &target);

		std::string getType();
		void makeSound();

	protected:
		std::string type;
};

#endif