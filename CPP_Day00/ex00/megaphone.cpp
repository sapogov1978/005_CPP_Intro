/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:25:33 by brattles          #+#    #+#             */
/*   Updated: 2021/11/17 22:08:14 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i) {
		for (int j = 0; j < (int) strlen(argv[i]); ++j) {
			if (isalpha(argv[i][j])) {
				std::cout << (char) toupper(argv[i][j]);
			}
			else {
			std::cout << argv[i][j];
			}
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
