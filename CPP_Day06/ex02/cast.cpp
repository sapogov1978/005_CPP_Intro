/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:38:56 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 21:57:31 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <iostream>

Base *generate(void) {
	Base *ptr;
	int randToCast = rand() % 3 + 1;
	if (randToCast == 1) {
		ptr = new A;
	} else if (randToCast == 2) {
		ptr = new B;
	} else if (randToCast == 3) {
		ptr = new C;
	} else {
		ptr = new Base;
	}
	return (ptr);
}

void identifyPtr(Base* p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "A pointer" << std::endl;
	} else if (dynamic_cast<B *>(p)) {
		std::cout << "B pointer" << std::endl;
	} else if (dynamic_cast<C *>(p)) {
		std::cout << "C pointer" << std::endl;
	} else {
		std::cout << "Base pointer, randomizer error" << std::endl;
	}
}

void identifyRfs(Base& p) {
	if (dynamic_cast<A *>(&p)) {
		std::cout << "A reference" << std::endl;
	} else if (dynamic_cast<B *>(&p)) {
		std::cout << "B reference" << std::endl;
	} else if (dynamic_cast<C *>(&p)) {
		std::cout << "C reference" << std::endl;
	} else {
		std::cout << "Base reference, randomizer error" << std::endl;
	}
}