/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:52:05 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 15:45:11 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Expected: ./sed <input file name> <text1> <text2>" << std::endl;
		return (1);
	}
	std::string	file_name = argv[1];

	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "No " << file_name << " file exists!" << std::endl;
		return (1);
	}
	file_name.append(".replace");
	std::ofstream	outfile(file_name, std::ios::out);

	std::string	text_one = argv[2];
	std::string	text_two = argv[3];
	std::string	line;
	
	size_t	match;
	while (std::getline(infile, line))
	{
		match = line.find(text_one);
		while (match != std::string::npos)
		{
			line.erase(match, text_one.length());
			line.insert(match, text_two);
			match = line.find(text_one);
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
}