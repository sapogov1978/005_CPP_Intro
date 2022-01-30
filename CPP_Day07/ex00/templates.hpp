/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:03:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/29 10:05:33 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H_
# define TEMPLATES_H_

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T min(T &a, T &b) {
	if (a < b)
		return a;
	else 
		return b;
};

template <typename T>
T max(T &a, T &b) {
	if (a > b)
		return a;
	else 
		return b;
};

#endif