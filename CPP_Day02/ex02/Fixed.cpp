/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:38:41 by brattles          #+#    #+#             */
/*   Updated: 2022/01/22 13:51:18 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fix = 0;
}

Fixed::Fixed(const Fixed &orig) {
	this->fix = orig.getRawBits();
}

Fixed::~Fixed() {
}

int Fixed::getRawBits() const {
	return (this->fix);
}

Fixed::Fixed(const int value) {
	this->fix = value << this->bits;
}

Fixed::Fixed(const float value) {
	this->fix = roundf(value * (1 << this->bits));
}

void Fixed::setRawBits(int raw) {
	this->fix = raw;
}

float Fixed::toFloat() const {
	float toFloat = (float)this->fix / (float)(1 << this->bits);
	return toFloat;
}

int Fixed::toInt() const {
	int toInt = this->fix >> this->bits;
	return toInt;
}

Fixed Fixed::operator=(const Fixed &orig) {
	this->fix = orig.getRawBits();
	return (*this);
}

// Comparation operators

bool Fixed::operator>(const Fixed &orig) const {
	return (this->getRawBits() > orig.getRawBits());
}

bool Fixed::operator<(const Fixed &orig) const {
	return (this->getRawBits() < orig.getRawBits());
}

bool Fixed::operator!=(const Fixed &orig) const {
	return (this->getRawBits() != orig.getRawBits());
}

bool Fixed::operator<=(const Fixed &orig) const {
	return (this->getRawBits() <= orig.getRawBits());
}

bool Fixed::operator>=(const Fixed &orig) const {
	return (this->getRawBits() >= orig.getRawBits());
}

bool Fixed::operator==(const Fixed &orig) const {
	return (this->getRawBits() == orig.getRawBits());
}

// Assignation operator

Fixed Fixed::operator*(const Fixed &orig) {
	Fixed res(*this);
	res.setRawBits((this->getRawBits() * orig.getRawBits())
					/ (1 << Fixed::bits));
	return res;
}

Fixed Fixed::operator/(const Fixed &orig) {
	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)orig.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::bits)) / tmp2);
	return (val);
}

Fixed Fixed::operator+(const Fixed &orig) {
	Fixed res(*this);
	res.setRawBits(this->getRawBits() + orig.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &orig) {
	Fixed res(*this);
	res.setRawBits(this->getRawBits() - orig.getRawBits());
	return res;
}

// Increment and decrement operations

Fixed Fixed::operator--() {
	this->fix--;
	return (*this);
}

Fixed Fixed::operator++() {
	this->fix++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

// Min and max funcs and their overload

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	if (first < second) {
		return first;
	} else {
		return second;
	}
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	if (first > second) {
		return first;
	} else {
		return second;
	}
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
	if (first < second) {
		return first;
	} else {
		return second;
	}
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
	if (first > second) {
		return first;
	} else {
		return second;
	}
}

Fixed &min(Fixed &first, Fixed &second) {
	if (first < second) {
		return first;
	} else {
		return second;
	}
}

Fixed &max(Fixed &first, Fixed &second) {
	if (first > second) {
		return first;
	} else {
		return second;
	}
}

const Fixed &max(const Fixed &first, const Fixed &second) {
	if (first > second) {
		return first;
	} else {
		return second;
	}
}

const Fixed &min(const Fixed &first, const Fixed &second) {
	if (first < second) {
		return first;
	} else {
		return second;
	}
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}