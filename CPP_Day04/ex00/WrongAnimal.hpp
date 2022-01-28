/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:35:04 by brattles          #+#    #+#             */
/*   Updated: 2022/01/23 17:52:03 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_H_
# define WRONGANIMAL_H_

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &target) {
			type = target.type;
		};
		WrongAnimal& operator= (const WrongAnimal &target);

		void makeSound();
		virtual std::string getType();

	protected:
		std::string type;

};

#endif