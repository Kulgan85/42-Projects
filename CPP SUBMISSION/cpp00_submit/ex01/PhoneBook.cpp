/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:38:26 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/26 10:44:59 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

#include "PhoneBook.hpp"

//Construct
PhoneBook::PhoneBook() {
	this->number = 0;
	return;
}

//Destruct
PhoneBook::~PhoneBook() {
	return;
}

//Gets
int PhoneBook::GetNumber(void)
{
	return(number);
}

//Sets
void PhoneBook::SetNumber(int num)
{
	number = num;
}

//IO (first in first out)
void PhoneBook::IO(PhoneBook *phone)
{
	for(int i=0; i < 7; i++)
		phone->Phonebook[i] = phone->Phonebook[i+1];
}

//
void PhoneBook::AddContacts(PhoneBook *phone)
{
	Contact		book;
	std::string	input;

	input = "";
	std::cout << "Enter first name: " << std::endl;
	book.SetFirstName(book.CheckLineSpaces());
	std::cout << "Enter last name: " << std::endl;
	book.SetLastName(book.CheckLineSpaces());
	std::cout << "Enter nick name: " << std::endl;
	std::getline(std::cin, input);
	while (book.CheckBlank(input))
		std::getline(std::cin, input);
	book.SetNickName(input);
	input = "";
	std::cout << "Enter phone number: " << std::endl;
	book.SetPhoneNumber(book.CheckPhoneChars());
	std::cout << "Enter a secret: " << std::endl;
	std::getline(std::cin, input);
	book.SetSecret(input);
	while (book.CheckBlank(input))
		std::getline(std::cin, input);
	book.SetSecret(input);
	input = "";
	if (phone->GetNumber() == 8)
	{
		IO(phone);
		phone->Phonebook[7] = book;
	}
	else
	{
		phone->Phonebook[phone->GetNumber()] = book;
		phone->SetNumber(phone->GetNumber() + 1);
	}
}

void	PhoneBook::CharLimiter(std::string input)
{
	int del;

	if (input.length() > 10)
	{
		std::cout << input.substr(0, 9) << ".";
	}
	else
	{
		del = 10 - input.length();
		while(del)
		{
			std::cout << ' ';
			del--;
		}
		std::cout << input;
	}
	
}

void	PhoneBook::PrintContacts(Contact contact, int index)
{
	if (index != 0)
	{
		std::cout << "    " << index << "|";
		CharLimiter(contact.GetFirstName());
		std::cout << "|"; 
		CharLimiter(contact.GetLastName());
		std::cout << "|";
		CharLimiter(contact.GetNickName());
		std::cout << std::endl;
	}
}

void	PhoneBook::PrintDetails(Contact contact)
{
	if(contact.GetFirstName().empty())
	{
		std::cout << "\033[31m" << "Contact is empty." << "\e[0m" << std::endl;
		return;
	}
	std::cout << "First Name: ";
	std::cout << contact.GetFirstName() << std::endl;
	std::cout << "Last Name: ";
	std::cout << contact.GetLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << contact.GetNickName() << std::endl;
	std::cout << "Phone Number: ";
	std::cout << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << contact.GetSecret() << std::endl;
}

void	PhoneBook::SearchContacts(PhoneBook *book)
{
	int 		index = 0;
	std::string input;

	std::cout << "Index| FirstName|  LastName|  Nickname" << std::endl;
	while(index < 9)
	{
		PrintContacts(book->Phonebook[index - 1], index);
		index++;
	}
	std::cout << "Type index number for contact you want" << std::endl;
	std::cout << "Type 0 to cancel" << std::endl;
	std::cout << std::endl;
	std::getline(std::cin, input);
	index = atoi(input.c_str());
	if (input == "0")
	{
		return;
	}
	if ((index < 0) || (index > 8))
	{
		std::cout << std::endl;
		std::cout << "\033[31m" << "Index entered is bad :(" << "\e[0m" << std::endl;
		SearchContacts(book);
	}
	else
	{
		PrintDetails(book->Phonebook[index-1]);
	}
}