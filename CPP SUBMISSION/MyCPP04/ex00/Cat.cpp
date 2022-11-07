/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:48:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:50:08 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Cat
Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "It seems to be a " << this->type << "!" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "A " << this->type << " climbed a tree" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << this->type << " goes nyaa~" << std::endl;
}