/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:33 by brattles          #+#    #+#             */
/*   Updated: 2022/01/28 21:18:30 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data {
	std::string data;
} Data;

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}


int main(void) {
	Data test;
	test.data = "SomeTestString";

	uintptr_t a;
	Data *b;

	a = serialize(&test);
	b = deserialize(a);

	std::cout << "Serialized: " << &test << std::endl;
	std::cout << "Deserialized: " << b << std::endl;

	return (0);
}