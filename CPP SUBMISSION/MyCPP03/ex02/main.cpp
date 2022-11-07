/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:56:06 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:33:10 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clapsalot("Sir Clapsalot");
	ScavTrap	sirClap("Sir Clap II");
	FragTrap	grenadier("Frag Grenadier");

	clapsalot.attack(sirClap.getName());
	sirClap.takeDamage(clapsalot.getATK());
	sirClap.attack(clapsalot.getName());
	clapsalot.takeDamage(sirClap.getATK());
	sirClap.attack(grenadier.getName());
	grenadier.takeDamage(sirClap.getATK());

	sirClap.guardGate();
	grenadier.highFiveGuys();
	return (0);
}
