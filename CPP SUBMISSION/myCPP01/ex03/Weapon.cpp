/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:53:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 13:28:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Construct
Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string name)
{
	this->setType(name);
	return ;
}

//Destruct (and also says which one gets rekt)
Weapon::~Weapon(void)
{
	return ;
}

//Set
void    Weapon::setType(std::string newType)
{
	this->type = newType;
}

//Get
std::string const &Weapon::getType(void)
{
	return (type);
}