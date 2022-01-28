/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:04:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/27 10:02:07 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::getIdea(int index) {
	return (this->ideas[index]);
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &target) {
	std::cout << "Brain deep copy called" << std::endl;
	for (int i = 0; i < static_cast<int>(target.ideas->length()); ++i) {
		this->ideas[i] = target.ideas[i];
	}
}