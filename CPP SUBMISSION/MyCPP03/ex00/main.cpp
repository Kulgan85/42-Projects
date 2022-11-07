/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:56:06 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/09 12:26:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{

	ClapTrap	clap1("Sir Clapsalot");
	ClapTrap	clap2 = clap1;

	clap2.setName("Sir Clap II");

	clap1.attack(clap2.getName());
	clap2.takeDamage(clap1.getATK());
	clap2.attack(clap1.getName());
	clap1.takeDamage(clap2.getATK());

	clap1.beRepaired(10);
	clap2.beRepaired(5);

	clap1.takeDamage(6);
	clap2.takeDamage(100);

	clap2.attack(clap1.getName());

	for (int repair = 1; repair < 10; repair++)
	{
		clap1.beRepaired(repair);
	}
	
	clap1.attack("Steve");

	return (0);

}