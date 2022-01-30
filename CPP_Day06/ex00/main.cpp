/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:43:34 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 19:47:16 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

#include "ScalarConversion.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Wrong arguments" << std::endl;
		return(1);
	}

	std::cout << std::fixed;
	std::cout.precision(1);

	char *target = argv[1];
	ScalarConversion convert(target);

	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();
	
	return (0);
}