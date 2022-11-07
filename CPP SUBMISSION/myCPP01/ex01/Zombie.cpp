/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:46:40 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 12:21:28 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Construct
Zombie::Zombie(void)
{
    return ;
}

//Destruct (and also says which one gets rekt)
Zombie::~Zombie(void)
{
    std::cout << this->name << " got obliterated" << std::endl;
}

//Set
void    Zombie::setName(std::string newName)
{
    name = newName;
}

//Get
std::string Zombie::getName(void)
{
    return (name);
}

//A zombie walks into a bar...
void    Zombie::announce(void)
{
    std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}