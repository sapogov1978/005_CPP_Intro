/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:57:23 by brattles          #+#    #+#             */
/*   Updated: 2022/01/29 16:24:53 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <iostream>
# include <exception>

template<class T>

class Array {
	private:
		T *data;
		int len;

	public:
		Array() {
			this->data = new T();
			this->len = 0;
		}
		
		Array(unsigned int len) {
			this->data = new T[len];
			this->len = len;
			for (size_t i = 0; i < len; ++i) {
				this->data[i] = T();
			}
		}
		
		~Array() {
			delete[] this->data;
		}
		
		Array(Array &orig) {
			this->data = new T[orig.len];
			this->len = orig.len;
			for (int i = 0; i < orig.len; i++) {
				this->data[i] = orig.data[i];
			}
		}
		
		Array &operator=(const Array& orig) {
			if (this != orig) {
				this->data = new T(orig.len);
				this->len = orig.len;
				for (int i = 0; i < orig.len; ++i) {
					this->data[i] = orig.data[i];
				}
			}
			return (*this);
		}

		int size() { 
			return (this->len); 
		}

		T &operator[](unsigned int index){
			if (this->len == 0) 
				throw EmptyArrExp();
			if (index >= static_cast<unsigned int>(this->len) || index < 0)
				throw ArrExp();
			return (this->data[index]);
		}

		class ArrExp : public std::exception {
			const char * what() const throw() {
				return "Out of bound";
			}
		};

		class EmptyArrExp : public std::exception {
			const char * what() const throw() {
				return "Empty array";
			}
		};
};

#endif