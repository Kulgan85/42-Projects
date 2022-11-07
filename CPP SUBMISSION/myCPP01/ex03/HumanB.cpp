/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:32:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:03 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//Construct (It was Jimbo with the pipe in the Library)
HumanB::HumanB(std::string Input)
{
	this->name = Input;
	std::cout << this->name << " was born" << std::endl;
	return ;
}

//Destruct (and also says which one gets rekt)
HumanB::~HumanB(void)
{
	std::cout << this->name << " has succumbed to sugma" << std::endl;
	return ;
}

//Set (Locked and Loaded)
void    HumanB::setWeapon(Weapon &Item)
{
	this->heldItem = &Item;
}

//Member Functions
void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->heldItem->getType() <<std::endl;
}