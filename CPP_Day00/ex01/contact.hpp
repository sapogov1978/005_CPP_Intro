/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:52:09 by brattles          #+#    #+#             */
/*   Updated: 2022/01/10 01:29:42 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <cstdlib>   //used for atoi
# include <locale>    //used for isdigit
# include <cstdio>    //used for EOF

class Contact {

public:
	~Contact(){};
	Contact(void) {
		this->id = -1;
		this->first_name = "";
		this->last_name = "";
		this->nickname = "";
		this->phone_number = "";
		this->darkest_secret = "";
	};

	int 		get_id();
	void		set_id(int contact_id);

	std::string get_first_name();
	void		set_first_name(std::string first_name);

	std::string	get_last_name();
	void		set_last_name(std::string last_name);

	std::string get_nickname();
	void		set_nickname(std::string nickname);

	std::string get_phone_number();
	void		set_phone_number(std::string phone_number);

	std::string get_darkest_secret();
	void		set_darkest_secret(std::string darkest_secret);


private:
	int id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
