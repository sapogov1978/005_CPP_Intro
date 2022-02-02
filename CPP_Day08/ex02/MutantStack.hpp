/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:06:08 by brattles          #+#    #+#             */
/*   Updated: 2022/01/30 15:08:56 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANT_STACK_HPP_
# define MUTANT_STACK_HPP_

# include <iostream>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
	{
	public:
		MutantStack(void) {};
 		MutantStack& operator=(const MutantStack& target) {*this = target; return *this;};
		MutantStack(const MutantStack& target) {*this = target;};
		virtual ~MutantStack(void) {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator							begin(void) 		{ return (this->c.begin()); };
	iterator							end(void)			{ return (this->c.end()); };
	const_iterator						cbegin(void) const	{ return (this->c.cbegin()); };
	const_iterator						cend(void) const	{ return (this->c.cend()); };
	reverse_iterator					rbegin(void)		{ return (this->c.rbegin()); };
	reverse_iterator					rend(void)			{ return (this->c.rend()); };
	const_reverse_iterator				crbegin(void) const	{ return (this->c.crbegin()); };
	const_reverse_iterator				crend(void) const	{ return (this->c.crend()); };

};

#endif