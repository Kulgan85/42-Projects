/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:46:36 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 12:07:26 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	ZombieHorde( int N, std::string name )
{
	Zombie	*hoard = new Zombie[N];
	int		i;

	i = 0;
	while (i < N)
	{
		hoard[i].setName(name);
		i++;
	}
	return (hoard);
}