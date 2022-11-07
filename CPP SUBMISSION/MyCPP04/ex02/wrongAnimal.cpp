/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:21:34 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 12:06:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void)
{
	this->type = "mutated animal";
	std::cout << "A " << this->type << " has stubled out of a bush!" << std::endl;
    std::cout << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
    std::cout << std::endl;
}

wrongAnimal::wrongAnimal (std::string type)
{
	this->type = type;
	std::cout << "A " << this->type << " has appeared!" << std::endl;
     std::cout << std::endl;
}

wrongAnimal::~wrongAnimal(void)
{
	std::cout << "A " << this->type << " ran away!" << std::endl;
    std::cout << std::endl;
}

void		wrongAnimal::makeSound(void) const
{
	std::cout << this->type << " goes #$^@&!$*" << std::endl;
    std::cout << std::endl;
}

std::string	wrongAnimal::getType(void) const
{
	return (this->type);
}

wrongAnimal &wrongAnimal::operator=( const wrongAnimal &copy )
{
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
    std::cout << std::endl;
	return (*this);
}