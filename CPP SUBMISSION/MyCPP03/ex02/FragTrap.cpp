/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:17:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:38:08 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	this->name = "Default Frag";
	this->HP = 100;
	this->EP = 100;
	this->ATK = 30;
	std::cout << PURPLE << this->name << YELLOW << " has been upgraded to FragTrap Class!" << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) {
	this->name = name;
	this->HP = 100;
	this->EP = 100;
	this->ATK = 30;
	std::cout << PURPLE << name << YELLOW << " has been upgraded to FragTrap Class!" << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap &copy ) {
	std::cout << YELLOW << "FragTrap Copy Created!" << RESET << std::endl;
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

FragTrap::~FragTrap( void ) {
	std::cout << PURPLE << this->name << RED << " has explobed!" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=( const ClapTrap &copy ) {	
	
	std::cout << YELLOW << "FragTrap Copy Created!" << RESET << std::endl;
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

void FragTrap::highFiveGuys( void ) {
	std::cout << PURPLE << this->name << RESET << " - 'High Five Guys!'" << std::endl;
    std::cout << "..." << std::endl;
    std::cout << "..." << std::endl;
    std::cout << PURPLE << this->name << RESET << " was left hanging" << std::endl;
    std::cout << PURPLE << this->name << RESET << " forgot he only has 2 fingers" << std::endl;
    std::cout << PURPLE << this->name << RESET << " is sad" << std::endl;
}