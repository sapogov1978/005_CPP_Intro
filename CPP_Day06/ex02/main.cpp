/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:22:05 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 21:59:47 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <iostream>

Base *generate(void);
void identifyPtr(Base* p);
void identifyRfs(Base& p);

int main() {

	srand(time(0));

	for (int i = 0; i < 10; i++) {
		Base *ptr = generate();
		identifyPtr(ptr);
		identifyRfs(*ptr);
		delete ptr;
	}
}