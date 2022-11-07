/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:23:58 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/26 12:35:59 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Construct
Zombie::Zombie(std::string setName)
{
    name = setName;
}

//Destruct (and also says which one gets rekt)
Zombie::~Zombie(void)
{
    std::cout << this->name << " got obliterated" << std::endl;
}

//A zombie walks into a bar...
void    Zombie::announce(void)
{
    std::cout << this->name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}