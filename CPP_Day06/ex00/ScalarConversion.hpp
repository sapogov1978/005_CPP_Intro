/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:48:19 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 19:47:06 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERSION_HPP_
# define SCALARCONVERSION_HPP_

# include <iostream>
# include <string>
# include <cmath>
# include <limits>
# include <cfloat>

class ScalarConversion {
	public:
		ScalarConversion();
		ScalarConversion(char* input);
		ScalarConversion(const ScalarConversion &target);
		ScalarConversion &operator=(const ScalarConversion &target);
		virtual ~ScalarConversion();

		void toChar();
		void toInt();
		void toFloat();
		void toDouble();

	private:
		char *cInput;
		std::string sInput;
		double value;
		bool isPossible;
};

#endif