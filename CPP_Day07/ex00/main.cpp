/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:57:59 by brattles          #+#    #+#             */
/*   Updated: 2022/01/29 14:43:19 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"
#include "Awesome.hpp"

#include <iostream>


int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << "----------- SUBJECT ------------" << std::endl;
	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "----------- CHECKLIST ------------" << std::endl;
	Awesome e(2), f(4);
	swap (e, f);
	std::cout << e << " " << f << std::endl;
	std::cout << max(e,f) << std::endl;
	std::cout << min(e,f) << std::endl;

	return 0;
}