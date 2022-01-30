/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:08:38 by brattles          #+#    #+#             */
/*   Updated: 2022/01/29 10:12:56 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
# define ITER_HPP_

# include <iostream>

template <typename T>
void iter(T *addr, int len, void (*fp)(T)) {
	for(int i = 0; i < len; i++) {
		fp(addr[i]);
	}
}

template <typename T>
void print(T target) {
	std::cout << target << std::endl;
}

#endif