/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:07:43 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 12:10:21 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void)
{
	this->type = "Wrong Cat";
	std::cout << "A " << this->type << " was summoned" << std::endl;
    std::cout << std::endl;
}

wrongCat::~wrongCat(void) 
{
	std::cout << "A " << this->type << " has noped out" << std::endl;
    std::cout << std::endl;
}

wrongCat::wrongCat(const wrongCat &copy)
{
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
    std::cout << std::endl;
}

wrongCat &wrongCat::operator=(const wrongCat &copy)
{
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
    std::cout << std::endl;
	return (*this);
}

//Priority goes to the base class function thus never happen

void		wrongCat::makeSound(void) const
{
	std::cout << "The " << this->type << " goes OMG A CAT!" << std::endl;
}