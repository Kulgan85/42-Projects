/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:33:19 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/26 10:45:45 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	book;
	while (1)
	{
		std::cout << std::endl;
		std::cout << "Type command: " << std::endl;
		std::cout << "ADD to add contact." << std::endl;
		std::cout << "SEARCH to find contact." << std::endl;
		std::cout << "EXIT to quit." << std::endl;
		std::cout << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			book.AddContacts(&book);
		}
		else if (input == "SEARCH")
		{
			book.SearchContacts(&book);
		}
		else if (input == "EXIT")
		{
			exit (0);
		}
		else
		{
			std::cout << "\033[31m" << "That is not a valid option. Make sure to use capital letters." << "\e[0m" << std::endl;
		}
	}
	return (0);
}