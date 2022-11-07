/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:43:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:33:23 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Construct
Animal::Animal( void )
{
	this->type = "Unknown Animal";
	std::cout << "An " << this->type << " has appeared!" << std::endl;
}

Animal::Animal ( std::string type )
{
	this->type = type;
	std::cout << "A " << this->type << " has appeared!" << std::endl;
}

//Destruct
Animal::~Animal( void )
{
	std::cout << "A " << this->type << " left us :(" << std::endl;
}

//Member Function
void		Animal::makeSound( void ) const
{
	std::cout << "The " << this->type << " goes, -Animal noise-"<< std::endl;
}

//Get
std::string	Animal::getType( void ) const
{
	return (this->type);
}
