/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:50:17 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:37:12 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Wrong Animal
//Construct
WrongAnimal::WrongAnimal( void )
{
	this->type = "Mutated Animal";
	std::cout << "A " << this->type << " stumbles out of the bush" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string type )
{
	this->type = type;
	std::cout << "A " << this->type << " has been born!" << std::endl;
}

//Destruct
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "The " << this->type << " got disintegrated" << std::endl;
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << "The " << this->type << " goes -geiger counter clicking-" << std::endl;
}

//Member Function

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

