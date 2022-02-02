/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:28:10 by brattles          #+#    #+#             */
/*   Updated: 2022/02/02 09:54:32 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <exception>
#include <random>

int main() {
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	// try {
		std::cout << "------------ WRONG CASES -------------" << std::endl << std::endl;
	   	// {
		// 	std::cout << "--  Trying to add 2 elems to size 1 --" << std::endl;
		// 	Span sp = Span(1);
		// 	sp.addNumber(1);
		// 	sp.addNumber(2);
		// }
		// {
   		// 	std::cout << "--  Trying to add 1 elems to size 10 --" << std::endl;
   		// 	std::cout << "-- and then trying to calculate span --" << std::endl;
		// 	Span sp = Span(10);
		// 	sp.addNumber(1);
		// 	std::cout << sp.shortestSpan() << std::endl;
		// 	std::cout << sp.longestSpan() << std::endl;
		// }
	// }
	// catch (std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	//  }
	{
		srand(time(0));
		Span sp = Span(100000);
		try {
			for (int i = 0; i < 100000; i++) {
				int randomNumber = rand();
				std::cout << "number add: " << randomNumber << std::endl;
				sp.addNumber(randomNumber);
			}
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
		try {
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception& ex) {
			std::cerr << ex.what() << std::endl;
		}
		
		try {
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& ex) {
			std::cerr << ex.what() << std::endl;
		}
	}
}