/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:43:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 11:59:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Construct
Animal::Animal(void)
{
	this->type = "Unknown Animal";
	std::cout << "An " << this->type << " has appeared!" << std::endl;
}

Animal::Animal (std::string type)
{
	this->type = type;
	std::cout << "A " << this->type << " has appeared!" << std::endl;
}

//Destruct
Animal::~Animal(void)
{
	std::cout << "A " << this->type << " left us :(" << std::endl;
}

//Member Function
void		Animal::makeSound(void) const
{
	std::cout << "The " << this->type << " goes, -Animal noise-"<< std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

Animal &Animal::operator=( const Animal &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}