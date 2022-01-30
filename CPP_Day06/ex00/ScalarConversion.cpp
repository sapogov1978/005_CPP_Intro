/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:48:16 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 20:05:03 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion() { }

ScalarConversion::ScalarConversion(char* input) {
	this->cInput = input;
	this->sInput = static_cast<std::string>(input);

	try {
		this->value = std::stod(input);
	}
	catch (...) {
		this->isPossible = true;
	}
}

ScalarConversion::~ScalarConversion() { }

ScalarConversion::ScalarConversion(const ScalarConversion &target) {
	this->cInput = target.cInput;
	this->sInput = target.sInput;
	this->value = target.value;
	this->isPossible = target.isPossible;
}

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &target) {
	this->cInput = target.cInput;
	this->sInput = target.sInput;
	this->value = target.value;
	this->isPossible = target.isPossible;
	return (*this);
}

void ScalarConversion::toChar() {
	std::cout << "char: ";
	if (isPossible || isnan(value))
		std::cout << "impossible";
	else if (isprint(value) == false)
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(value);
	std::cout << std::endl;
}

void ScalarConversion::toInt() {
	std::cout << "int: ";
	if (isPossible || isnan(value) || value > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void ScalarConversion::toFloat() {
	std::cout << "float: ";
	if (isPossible || isnan(value) || value > FLT_MAX)
		std::cout << "nanf";
	else
		std::cout << static_cast<float>(value) << 'f';
	std::cout << std::endl;
}

void ScalarConversion::toDouble() {
	std::cout << "double: ";
	if (isPossible || isnan(value))
		std::cout << "nan";
	else
		std::cout << static_cast<double>(value);
	std::cout << std::endl;
}