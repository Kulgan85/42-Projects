/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:11:05 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:10:22 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	this->name = "Default Scav";
	this->HP = 100;
	this->EP = 50;
	this->ATK = 20;
	std::cout << PURPLE << this->name << YELLOW << " has been upgraded to ScavTrap Class!" << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) {
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->ATK = 20;
	std::cout << PURPLE << name << YELLOW << " has been upgraded to ScavTrap Class!" << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) {
	std::cout << YELLOW << "ScavTrap Copy Created!" << RESET << std::endl;
	this->name = copy.getName();
	this->HP = copy.getHP();
	this->EP = copy.getEP();
	this->ATK = copy.getATK();
	std::cout << "Name: " << PURPLE << this->name << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << PURPLE << this->name << RED << " has disintergrated!" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ClapTrap &copy ) {	
	
	std::cout << YELLOW << "ScavTrap Copy Created!" << RESET << std::endl;
	this->name = copy.getName();
	this->HP = copy.getHP();
	this->EP = copy.getEP();
	this->ATK = copy.getATK();
	std::cout << "Name: " << PURPLE << this->name << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
	return (*this);
}

void ScavTrap::guardGate( void ) {
	std::cout << PURPLE << this->name << RESET << " is chilling at the gate" << std::endl;
}