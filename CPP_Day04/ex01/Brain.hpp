/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:59:03 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 14:42:31 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_H_
# define BRAIN_H_

# include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain &target);
		Brain& operator=(const Brain &target);
		~Brain();
		
		void setIdea(int index, std::string idea);
		std::string getIdea(int index);

	private:
		std::string ideas[100];

};

#endif