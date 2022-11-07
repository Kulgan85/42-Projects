/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:48:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/26 10:41:51 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Constructs
Constructor in C++ is a special method
that is invoked automatically at the 
time of object creation. It is used 
to initialize the data members of 
new objects generally.	*/

//set things as nothing so it doesn't access random memory
Contact::Contact(void) 
{
	FirstName = "";
	LastName = "";
	NickName = "";
	PhoneNumber = "";
	Secret = "";
	return;
}

/*Destructs	
Destructors are usually used to deallocate memory and 
do other cleanup for a class object and its class 
members when the object is destroyed.*/
Contact::~Contact(void) 
{
	return;
}

//Gets
//Getter allow access to the private vars in the object
std::string Contact::GetFirstName(void)
{
	return(Contact::FirstName);
}

std::string Contact::GetLastName(void)
{
	return(this->LastName);
}

std::string Contact::GetNickName(void)
{
	return(Contact::NickName);
}

std::string Contact::GetPhoneNumber(void)
{
	return(Contact::PhoneNumber);
}

std::string Contact::GetSecret(void)
{
	return(Contact::Secret);
}

//Sets
//Setters reallocate the values of private variables w/in the class
void	Contact::SetFirstName(std::string str)
{
	FirstName = str;
}

void	Contact::SetLastName(std::string str)
{
	LastName = str;
}

void	Contact::SetNickName(std::string str)
{
	NickName = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	PhoneNumber = str;
}

void	Contact::SetSecret(std::string str)
{
	Secret = str;
}

//No emptiness
int	Contact::CheckBlank(std::string str)
{
	if(str == "" || str[0] == ' ')
	{
		std::cout << "\033[31m" <<"This is a required field" << "\e[0m" << std::endl;
		std::cout << std::endl;
		return(1);
	}
	return(0);
}

//Spaces are not tolerated!
std::string	Contact::CheckLineSpaces(void)
{
	std::string	line;
	int			i;

	std::getline(std::cin, line);
	while (CheckBlank(line))
		std::getline(std::cin, line);
	i = 1;
	while (line[i])
	{
		if (isspace(line[i]))
		{
			std::cout << "\033[31m" << "Spaces will not be tolerated!" << "\e[0m" << std::endl;
			std::getline(std::cin, line);
			i = -1;
		}
		i++;
	}
	return(line);
}

//Phone number must be numbers!
std::string	Contact::CheckPhoneChars(void)
{
	std::string input;
	int         i;

	std::getline(std::cin, input);
	while(CheckBlank(input))
	{
		std::getline(std::cin, input);
	}
	i = 0;
	while(input[i])
	{
		if (isalpha(input[i]))
		{
			std::cout << "\033[31m" << "Phone number can only be numbers!" << "\e[0m" << std::endl;
			std::cout << std::endl;
			std::getline(std::cin, input);
			while (CheckBlank(input))
			{
				std::getline(std::cin, input);
			}
			i = -1;
		}
		i++;
	}
	return (input);
}