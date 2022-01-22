/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:15:54 by brattles          #+#    #+#             */
/*   Updated: 2022/01/20 21:10:25 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ostream>
#include <cstring>

void    ft_panic(std::string error)
{
	std::cout << "Error: " << error << std::endl;
	exit (1);
}

std::string read_from_file(std::ifstream &read)
{
	std::string s;

	read.seekg(1, std::ios::end);
	int size = read.tellg();
	s.resize(size);
	read.seekg(0, std::ios::beg);
	read.read(&s[0], size);

	return (s);
}

void ft_replace(std::string &contents, char *s1, char *s2)
{
	size_t  pos;
	std::string str1(s1);
	std::string str2(s2);
	int s1_len = str1.size();
	int s2_len = str2.size();;

	pos = contents.find(s1, 0, s1_len);
	while(pos != std::string::npos)
	{
		contents.erase(pos, s1_len);
		contents.insert(pos, s2);
		pos = pos + s2_len;
		pos = contents.find(s1, pos, s1_len);
	}
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string filename_content;
	std::string target_file;
	std::ifstream read;
	std::ofstream write;

	if (argc != 4) {
		ft_panic("Incorrect number of arguments");
	}

	filename = argv[1];
	read.open(filename);

	if (!read || !(read.is_open())) {
		read.close();
		ft_panic("Cannot read from file");
	}

	target_file = filename.append(".replace");
	write.open(target_file, std::ofstream::trunc | std::ofstream::out);

	if (!(write.is_open())) {
		ft_panic("Cannot write to file");
	}

	filename_content = read_from_file(read);

	ft_replace(filename_content, argv[2], argv[3]);

	write.write(filename_content.c_str(), filename_content.size());

	read.close();
	write.close();
}
