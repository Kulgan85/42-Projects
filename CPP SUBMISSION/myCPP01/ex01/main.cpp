/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:44:46 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 12:33:12 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main()
{
	Zombie *ZombieLots;
	int i;

	ZombieLots = ZombieHorde(8, "Tim");
	i = 0;
	while (i < 8)
	{
		ZombieLots[i].announce();
		i++;
	}
	delete[] ZombieLots;
	return(0);
}