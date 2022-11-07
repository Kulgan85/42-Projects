/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:56:06 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 10:15:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapsalot("Sir Clapsalot");
	ScavTrap	sirClap("Sir Clap II");

	clapsalot.attack(sirClap.getName());
	sirClap.takeDamage(clapsalot.getATK());
	sirClap.attack(clapsalot.getName());
	clapsalot.takeDamage(sirClap.getATK());

	sirClap.guardGate();

	return (0);
}
