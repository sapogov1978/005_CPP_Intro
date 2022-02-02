/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:31:59 by brattles          #+#    #+#             */
/*   Updated: 2022/01/30 15:14:15 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) {
	this->numbers.reserve(size);
}

Span::~Span() {
	this->numbers.clear();
}

Span::Span(const Span &target) {
	this->numbers.clear();
	this->numbers.reserve(target.numbers.size());
	std::copy(target.numbers.begin(), target.numbers.end(), this->numbers   .begin());
}

Span &Span::operator=(const Span &target) {
	this->numbers.clear();
	this->numbers.reserve(target.numbers.size());
	std::copy(target.numbers.begin(), target.numbers.end(), this->numbers.begin());
	return (*this);
}

void Span::addNumber(unsigned int number) {
	if (this->numbers.size() == this->numbers.capacity())
		throw SizeOver();
	std::vector<unsigned int>::iterator iter;
	iter = std::find (numbers.begin(), numbers.end(), number);
	numbers.begin();
	if (iter != numbers.end())
		throw ExistNumber();

	numbers.push_back(number);
}

unsigned int Span::min(unsigned int n1, unsigned int n2) {
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

unsigned int Span::max(unsigned int n1, unsigned int n2) {
	if (n1 < n2)
		return (n2);
	else
		return (n1);
}

unsigned int Span::shortestSpan(void) {
	if (numbers.size() <= 2)
		throw NoRange();
	unsigned int shortRange = 0;
	for (std::vector<unsigned int>::iterator itr = numbers.begin(); itr+1 != numbers.end(); ++itr) {
		if (shortRange == 0 || (*itr, *(itr+1)) - min(*itr, *(itr+1)) < shortRange)
			shortRange = max(*itr, *(itr+1)) - min(*itr, *(itr+1));
	}
	return (shortRange);
}

unsigned int Span::longestSpan(void) {
	if (numbers.size() <= 2)
		throw NoRange();
	unsigned int longRange = 0;
	for (std::vector<unsigned int>::iterator itr = numbers.begin(); itr+1 != numbers.end(); ++itr) {
		if (max(*itr, *(itr+1)) - min(*itr, *(itr+1)) > longRange)
			longRange = max(*itr, *(itr+1)) - min(*itr, *(itr+1));
	}
	return (longRange);
}

const char* Span::SizeOver::what() const throw() {
	return ("ERROR: Size over!");
}

const char* Span::ExistNumber::what() const throw() {
	return ("ERROR: Existing Number!!");
}

const char* Span::NoRange::what() const throw() {
	return ("ERROR: No range!");
}