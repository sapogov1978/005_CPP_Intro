/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:42:16 by brattles          #+#    #+#             */
/*   Updated: 2022/01/19 17:55:48 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String Memory address: " << &str << " string - " << str << std::endl;
    std::cout << "Pointer Memory address: " << stringPTR << " string - " << *stringPTR << std::endl;
    std::cout << "Reference Memory address: " << &stringREF << " string - " << stringREF << std::endl;

    return (0);
}