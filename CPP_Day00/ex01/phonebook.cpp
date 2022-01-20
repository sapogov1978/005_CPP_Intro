/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:49:00 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 16:18:44 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	arewedoneyet(void)
{
	std::string	quote[3];

	quote[0] = "Hasta la vista, baby";
	quote[1] = "See you later, alligator";
	quote[2] = "Give me a sign, hit me baby one more time";

	srand(time(0));

	if (feof(stdin)) {
		std::cout << std::endl << quote[rand() % 3] << std::endl;
		exit (EXIT_SUCCESS);
	}
}

int	contact_details(Phonebook Phonebook, int contact_counts)
{
	std::string	id;
	std::locale	locl;
	int			int_id;

	if (contact_counts == 0) {
		std::cout << "Phonebook is empty. Use ADD command to create contacts" << std::endl;
		return (0);
	}

	std::cout << "To get a detailed information, please enter an ID " << std::endl \
				<< "Press '9' to return to previous page" << std::endl \
				<< "ID >>> ";
	getline(std::cin, id);
	arewedoneyet();

	if (!(isdigit(id[0], locl)) || strlen(id.c_str()) > 1) {
		return (1);
	}
	else {
		int_id = atoi(id.c_str());
	}

	if (int_id == 9) {
		return (0);
		}
	else if (int_id >= contact_counts || int_id < 0){
		return (1);
		}
	else {
	std::cout << "First name: " << Phonebook.Contacts[int_id].get_first_name() << std::endl;
	std::cout << "Last name: " << Phonebook.Contacts[int_id].get_last_name() << std::endl;
	std::cout << "Nickname: " << Phonebook.Contacts[int_id].get_nickname() << std::endl;
	std::cout << "Phone number: " << Phonebook.Contacts[int_id].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << Phonebook.Contacts[int_id].get_darkest_secret() << std::endl;
	}

	return (0);
}

void list_contact(Phonebook Phonebook, int contact_count)
{
	std::string trim_fn;
	std::string trim_ln;
	std::string trim_nn;

	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << "|   Index    | First Name | Last Name  |  Nickname  |" << std::endl;
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	for (int i = 0; i < contact_count; i++) {
		std::cout << "| ";

		std::cout.width(10);
		std::cout << std::setw(10) << std::right << Phonebook.Contacts[i].get_id();

		std::cout << " | ";

		std::cout.width(10);
		if (strlen(Phonebook.Contacts[i].get_first_name().c_str()) > 10) {
			trim_fn = Phonebook.Contacts[i].get_first_name().substr(0,9);
			std::cout << std::setw(9) << std::right << trim_fn << ".";
		}
		else
			std::cout << std::setw(10) << std::right << Phonebook.Contacts[i].get_first_name();

		std::cout << " | ";

		std::cout.width(10);
		if (strlen(Phonebook.Contacts[i].get_last_name().c_str()) > 10) {
			trim_ln = Phonebook.Contacts[i].get_last_name().substr(0,9);
			std::cout << std::setw(9) << std::right << trim_ln << ".";
		}
		else
			std::cout << std::setw(10) << std::right << Phonebook.Contacts[i].get_last_name();

		std::cout << " | ";

		std::cout.width(10);
		if (strlen(Phonebook.Contacts[i].get_nickname().c_str()) > 10) {
			trim_nn = Phonebook.Contacts[i].get_nickname().substr(0,9);
			std::cout << std::setw(9) << std::right << trim_nn << ".";
		}
		else
			std::cout << std::setw(10) << std::right << Phonebook.Contacts[i].get_nickname();

		std::cout << " |" << std::endl;
	}
	std::cout << "+------------+------------+------------+------------+" << std::endl;
	std::cout << std::endl;
	while (contact_details(Phonebook, contact_count)){
		std::cout << "Please enter a correct ID" << std::endl;
	};
}

Contact fill_contact(int id)
{
	Contact     new_contact;
	std::string tmp;

	std::cout << "Please fill information about new contact" << std::endl;

	new_contact.set_id(id);
	std::cout << "First name: ";
	getline(std::cin, tmp);
	arewedoneyet();
	new_contact.set_first_name(tmp);
	std::cout << "Last name: ";
	getline(std::cin, tmp);
	arewedoneyet();
	new_contact.set_last_name(tmp);
	std::cout << "Nickname: ";
	getline(std::cin, tmp);
	arewedoneyet();
	new_contact.set_nickname(tmp);
	std::cout << "Phone number: ";
	getline(std::cin, tmp);
	arewedoneyet();
	new_contact.set_phone_number(tmp);
	std::cout << "Darkest secret: ";
	getline(std::cin, tmp);
	arewedoneyet();
	new_contact.set_darkest_secret(tmp);
	return (new_contact);
}

int main(void)
{
	std::string command;
	Phonebook   Phonebook;
	int         contact_count = 0;
	int         id = 0;


	std::cout << "Welcome to Phonebook" << std::endl \
				<< "It cannot store more than 8 contacts" << std::endl \
				<< "You can use ADD, SEARCH or EXIT commands" << std::endl;

	while (1)
	{
		std::cout << "PHONEBOOK >>> ";
		getline(std::cin, command);
		arewedoneyet();
		if (command.compare("ADD") == 0) {
			if (++contact_count > 8) contact_count = 8;
			Phonebook.Contacts[id] = fill_contact(id);
			if (++id > 7) id = 0;
		}
		else if (command.compare("SEARCH") == 0) {
			list_contact(Phonebook, contact_count);
		}
		else if (command.compare("EXIT") == 0) {
			break ;
		}
		else {
			std::cout << "Command is not suppoted" << std::endl;
			std::cout << "You can use ADD, SEARCH or EXIT commands" << std::endl;
		}
	}
	return (0);
}
