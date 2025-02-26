/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:49:50 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/26 10:36:14 by chhoflac         ###   ########.fr       */
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
	std::ifstream 	file;
	if (argc  == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		file.open(filename.c_str());
		if (!file)
		{
			std::cerr << "Error: could not open file" << std::endl;
			return (0);
		}
		while (std::getline(file, line)){
			std::cout << line << std::endl;
		}
		file.close();
	}
}