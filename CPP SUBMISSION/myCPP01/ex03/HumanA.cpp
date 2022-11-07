/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:28:51 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 14:29:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//Construct (It was Jimbo with the pipe in the Library)
HumanA::HumanA(std::string input, Weapon &Item):name(input), heldItem(&Item)
{
	std::cout << this->name << " was born holding a " << heldItem->getType() << std::endl;
	return ;
}

//Destruct (and also says which one gets rekt)
HumanA::~HumanA(void)
{
	std::cout << this->name << " has succumbed to ligma" << std::endl;
	return ;
}

//Set (Locked and Loaded)
void    HumanA::setWeapon(Weapon &Item)
{
	this->heldItem = &Item;
}

//Member Functions
void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << heldItem->getType() <<std::endl;
}