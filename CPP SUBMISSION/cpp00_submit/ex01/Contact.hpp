/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:48:07 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/25 13:11:26 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact 
{
	public:

	//Construct
	Contact( void );

	//Destruct
	~Contact( void );

	//Set
	void	SetFirstName(std::string str);
	void	SetLastName(std::string str);
	void	SetNickName(std::string str);
	void	SetPhoneNumber(std::string str);
	void	SetSecret(std::string str);

	//Get
	std::string	GetFirstName(void);
	std::string GetLastName(void);
	std::string	GetNickName(void);
	std::string	GetPhoneNumber(void);
	std::string	GetSecret(void);

	//Other
	int			CheckBlank(std::string str);
	std::string	CheckPhoneChars(void);
	std::string CheckLineSpaces(void);
	
	private:

	//Members
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	Secret;

};

#endif
