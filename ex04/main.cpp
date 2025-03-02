/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:50 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/02 16:29:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string get_content(std::ifstream &file)
{
	std::string content;
	std::string line;

	while (std::getline(file, line))
	{
		content += line + "\n";
	}
	return (content);
}

std::string replace(std::string &content, std::string &s1, std::string &s2)
{
	std::string result;
	size_t		find;
	size_t 		pos;
	
	pos = 0;
	if (s1.empty())
		return (content);
	find = content.find(s1, pos);
	while (find !=std::string::npos)
	{
		result += content.substr(pos, find - pos);
		result += s2;
		pos = find + s1.length();
		find = content.find(s1, pos);
	}
	result += content.substr(pos);
	return (result);
}

void	write_into_newfile(std::string filename, std::string &content)
{
	std::ofstream newOne(filename + ".replace");

	if (!newOne.is_open()){
		std::cerr << "Error : could not access / open file" << std::endl;
	}
	else {
		newOne << content;
		newOne.close();
	}
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::ifstream file;
	std::ofstream newOne;
	std::string content;
	std::string res;

	if (argc != 4)
	{
		std::cerr << "Error: wrong arguments (<filename> <s1> <s2>)" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	file.open(filename.c_str(), std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "Error : could not access / open file" << std::endl;
		return (1);
	}
	content = get_content(file);
	res = replace(content, s1, s2);
	write_into_newfile(filename, res);
	file.close();
	return (0);
}