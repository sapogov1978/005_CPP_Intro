/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:34:07 by brattles          #+#    #+#             */
/*   Updated: 2022/01/21 17:37:33 by brattles         ###   ########.fr       */
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

		Fixed operator=(Fixed const &orig);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif