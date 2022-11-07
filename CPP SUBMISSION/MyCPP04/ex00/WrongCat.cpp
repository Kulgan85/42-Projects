/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:50:29 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 10:53:17 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Wrong Cat
WrongCat::WrongCat( void )
{
	this->type = "not cat";
	std::cout << "A " << this->type << " was... mutated" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "A " << this->type << " was ({@+A/R#)B@*" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "The " << this->type << " goes -not cat noises-" << std::endl;
}