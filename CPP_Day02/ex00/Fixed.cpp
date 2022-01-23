/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:25:40 by brattles          #+#    #+#             */
/*   Updated: 2022/01/21 12:26:40 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &orig) {
	this->fix = orig.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix);
}

void Fixed::setRawBits(int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fix = raw;
}

Fixed Fixed::operator=(const Fixed &orig) {
	std::cout << "Assignation operator called" << std::endl;
	this->fix = orig.getRawBits();
	return (*this);
}