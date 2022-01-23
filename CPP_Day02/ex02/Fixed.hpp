/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:33:46 by brattles          #+#    #+#             */
/*   Updated: 2022/01/22 13:52:36 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <tgmath.h>
# include <cmath>

class Fixed
{
	private:
		int fix;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &orig);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator>(Fixed const &orig) const;
		bool operator<(Fixed const &orig) const;
		bool operator>=(Fixed const &orig) const;
		bool operator<=(Fixed const &orig) const;
		bool operator==(Fixed const &orig) const;
		bool operator!=(Fixed const &orig) const;

		Fixed operator=(Fixed const &orig);
		Fixed operator+(Fixed const &orig);
		Fixed operator-(Fixed const &orig);
		Fixed operator*(Fixed const &orig);
		Fixed operator/(Fixed const &orig);

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed const &min(Fixed const &first, Fixed const &second);
		static Fixed const &max(Fixed const &first, Fixed const &second);
		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
};

Fixed	&min(Fixed &first, Fixed &second);
Fixed	&max(Fixed &first, Fixed &second);
Fixed	const &min(Fixed const &first, Fixed const &second);
Fixed	const &max(Fixed const &first, Fixed const &second);
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif