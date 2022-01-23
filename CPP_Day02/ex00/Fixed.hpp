/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:24:18 by brattles          #+#    #+#             */
/*   Updated: 2022/01/21 12:25:11 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>

class Fixed
{
	private:
		int fix;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(Fixed &orig);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int raw);
		Fixed operator=(Fixed const &orig);
};

#endif