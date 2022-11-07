/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:38:30 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/25 14:58:50 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Contact;

class PhoneBook
{
	public:

	//Public Class Members
	Contact Phonebook[8];

	//Construct
	PhoneBook( void );

	//Destruct
	~PhoneBook(void);

	//Set
	void	SetNumber(int num);

	//Get
	int		GetNumber(void);
		
	//Other
	void	AddContacts(PhoneBook *phone);
	void	PrintContacts(Contact contact, int i);
	void	PrintDetails(Contact contact);
	void	SearchContacts(PhoneBook *book);
	void	IO(PhoneBook *phone);
	void	CharLimiter(std::string input);

	private:
		
	//Members
	int	number;
};

#endif
