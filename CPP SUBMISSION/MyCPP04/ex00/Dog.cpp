/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:48:47 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 10:48:48 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Dog 
Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "It appears to be a " << this->type << "!" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "A " << this->type << " has gone on a walk" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "A " << this->type << " goes Woof" << std::endl;
}