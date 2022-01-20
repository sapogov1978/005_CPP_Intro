/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:06:39 by brattles          #+#    #+#             */
/*   Updated: 2022/01/06 00:51:40 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

	int 		Contact::get_id(void)
	{
		return (this->id);
	}

	void		Contact::set_id(int contact_id)
	{
		Contact::id = contact_id;
	}

	std::string Contact::get_first_name()
	{
		return (this->first_name);
	}

	void		Contact::set_first_name(std::string first_name)
	{
		this->first_name = first_name;
	}

	std::string	Contact::get_last_name()
	{
		return (this->last_name);
	}

	void		Contact::set_last_name(std::string last_name)
	{
		Contact::last_name = last_name;
	}

	std::string Contact::get_nickname()
	{
		return (this->nickname);
	}

	void		Contact::set_nickname(std::string nickname)
	{
		Contact::nickname = nickname;
	}

	std::string Contact::get_phone_number()
	{
		return (this->phone_number);
	}

	void		Contact::set_phone_number(std::string phone_number)
	{
		Contact::phone_number = phone_number;
	}

	std::string Contact::get_darkest_secret()
	{
		return (this->darkest_secret);
	}

	void		Contact::set_darkest_secret(std::string darkest_secret)
	{
		Contact::darkest_secret = darkest_secret;
	}
