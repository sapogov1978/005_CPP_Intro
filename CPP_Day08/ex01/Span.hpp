/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:31:45 by brattles          #+#    #+#             */
/*   Updated: 2022/01/30 14:34:00 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span {
    public:
	    Span();
	    Span(unsigned int size);
	    Span(const Span &target);
	    Span &operator=(const Span &target);
   	    virtual ~Span();

	    void addNumber(unsigned int number);
        unsigned int shortestSpan(); 
	    unsigned int longestSpan();

	    class ExistNumber : public std::exception {
	        public:
		        const char *what(void) const throw();
	    };

	    class SizeOver : public std::exception {
	        public:
		        const char *what(void) const throw();
	    };

    	class NoRange : public std::exception {
	        public:
		        const char *what(void) const throw();
	    };

	    unsigned int min(unsigned int n1, unsigned n2);
	    unsigned int max(unsigned int n1, unsigned n2);

    private:
	    std::vector<unsigned int> numbers;
};


#endif