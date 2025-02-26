/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:50 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/26 13:43:16 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv){
	
	std::string		line;
	std::string		filename;
	std::string		content;
	std::string		s1;
	std::string		s2;
	std::string		before;
	std::ifstream 	file;
	size_t 			pos;
	size_t			start;
	
	if (argc  == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		file.open(filename.c_str());
		start = 0;
		if (!file)
		{
			std::cerr << "Error: could not open file" << std::endl;
			return (0);
		}
		while (std::getline(file, line)){
			content += line;
			if (!content.empty())
				content += "\n";
		}
		while (content.find(s1, pos)){
			before = content.substr(start, )
		}
		std::cout << content;
		file.close();
	
	}
	else
		std::cout << "Error: need more arguments : <filename> <s1> <s2>" << std::endl;
}