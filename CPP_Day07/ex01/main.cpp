/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:08:23 by brattles          #+#    #+#             */
/*   Updated: 2022/01/29 15:17:57 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"
#include "Awesome.hpp"

int main(void)
{
	std::cout << "---------- SUBJECT -----------" << std::endl;
	std::string el;
	
	std::cout << "itterate to (N element): ";
	getline(std::cin, el);
	if (feof(stdin)) {
		std::cout << std::endl << std::endl;
		exit (EXIT_SUCCESS);
	}

	int array1[] = {1,2,3,4,5};
	char array2[] = {'a','b','c','d','e'};
	float array3[] = {1.1,2.2,3.3,4.4,5.5};

	if (atoi(el.c_str()) > static_cast<int>(sizeof(array3)/sizeof(array3[0])) || \
		atoi(el.c_str()) > static_cast<int>(sizeof(array2)/sizeof(array2[0])) || \
		atoi(el.c_str()) > static_cast<int>(sizeof(array1)/sizeof(array1[0]))) {
		std::cout << "Out of array lenght" << std::endl;
		return (1);
		}
	iter(array1, atoi(el.c_str()), print);
	iter(array2, atoi(el.c_str()), print);
	iter(array3, atoi(el.c_str()), print);
	
	std::cout << "---------- CHECKLIST -----------" << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
	
	return (0);
}