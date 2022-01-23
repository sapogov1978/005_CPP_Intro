/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:33:55 by brattles          #+#    #+#             */
/*   Updated: 2022/01/22 13:52:52 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &orig) {
	this->fix = orig.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (this->fix);
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fix = value << this->bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fix = roundf(value * (1 << this->bits));
}

void Fixed::setRawBits(int raw) {
	this->fix = raw;
}

Fixed Fixed::operator=(const Fixed &orig) {
	std::cout << "Assignation operator called" << std::endl;
	this->fix = orig.getRawBits();
	return (*this);
}

float Fixed::toFloat() const {
	float toFloat = (float)this->fix / (float)(1 << this->bits);
	return toFloat;
}

int Fixed::toInt() const {
	int toInt = this->fix >> this->bits;
	return toInt;
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}