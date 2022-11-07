/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:09:22 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 10:06:05 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Construct
ClapTrap::ClapTrap( void ) {
	std::cout << YELLOW << "Base Model ClapTrap Constructor!" << RESET << std::endl;
	this->name = "Base Model";
	this->HP = 10;
	this->EP = 10;
	this->ATK = 0;
	std::cout << "Name: " << PURPLE << this->name << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << YELLOW <<"Named ClapTrap under construction!" << RESET <<std::endl;
    this->name = name;
    this->HP = 10;
    this->EP = 10;
    this->ATK = 0;
	std::cout << "Name: " << PURPLE << this->name << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
}

//Copy
ClapTrap::ClapTrap(const ClapTrap& copy) 
{
    std::cout << YELLOW << "ClapTrap Clone under construction" << RESET << std::endl;
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

//Destruct
ClapTrap::~ClapTrap() 
{
    std::cout << PURPLE << this->name << RED << " fell apart" << RESET <<std::endl;
}

//Copy Assignment
ClapTrap&	ClapTrap::operator=(const ClapTrap& assign) 
{
    std::cout << YELLOW << "ClapTrap Clone under construction" << RESET << std::endl;
	this->name = assign.getName();
	this->HP = assign.getHP();
	this->EP = assign.getEP();
	this->ATK = assign.getATK();
	std::cout << "Name: " << PURPLE << this->name << RESET << std::endl;
	std::cout << "Hit points: " << GREEN << this->HP << RESET << std::endl;
	std::cout << "Energy points: " << BLUE << this->EP << RESET << std::endl;
	std::cout << "Attack damage: " << RED << this->ATK << RESET << std::endl;
    std::cout << std::endl;
    return (*this);
}

//Get
std::string ClapTrap::getName(void) const 
{
    return (this->name);
}

int ClapTrap::getHP(void) const
{
    return (this->HP);
}

int ClapTrap::getEP(void) const
{
    return (this->EP);
}

int ClapTrap::getATK(void) const
{
    return (this->ATK);
}

//Set
void ClapTrap::setName(std::string newName)
{
    std::cout << PURPLE << this->name << RESET << " has changed their name to " << PURPLE << newName << RESET << std::endl;
    std::cout << std::endl;
    this->name = newName;
}

void ClapTrap::setHP(int newHP)
{
    this->HP = newHP;
}

void ClapTrap::setEP(int newEP)
{
    this->EP = newEP;
}

//Member Functions
void	energyRemaining( ClapTrap &current ) {
	std::cout << "ClapTrap " << PURPLE << current.getName() << RESET << " has used some energy" << std::endl;
	std::cout << PURPLE << current.getName() << RESET << " has " << BLUE << current.getEP() << RESET << " energy points remaining!" << std::endl;
    std::cout << std::endl;
}

bool	death_check( ClapTrap &current ) {
	if (current.getHP() < 1)
	{
		std::cout << "ClapTrap " << PURPLE << current.getName() << RESET << " is already dead!" << std::endl;
        std::cout << std::endl;
		return (false);
	}
	return (true);
}

bool	energy_check( ClapTrap &current ) {
	if (current.getEP() < 1)
	{
		std::cout << "ClapTrap " << PURPLE << current.getName() << RESET << " has no energy left!" << std::endl;
        std::cout << std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::attack(const std::string& target) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	std::cout << "ClapTrap " << PURPLE << this->name << RESET << " attacks " << PURPLE << target << RESET << " and causes " << this->ATK << " points of damage!" << std::endl; 
	this->EP--;
	energyRemaining(*this);
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	this->HP -= amount;
	std::cout << "ClapTrap " << PURPLE << this->name << RESET << " has taken " << RED << amount << RESET <<" damage and has ";
	if (this->HP > 0)
	{
		std::cout << GREEN << this->HP << RESET << " hit points remaining!" << std::endl;
        std::cout << std::endl;
	}
	else
	{
		std::cout << RED << "been broken beyond repair!" << RESET << std::endl;
        std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!death_check(*this) || !energy_check(*this))
	{
		return ;
	}
	this->EP --;
	this->HP += amount;
	std::cout << "ClapTrap " << PURPLE << this->name << RESET << " has been repaired! " << std::endl;
    std::cout << PURPLE << this->name << RESET << " has " << GREEN << this->HP << RESET " hit points remaining!" << std::endl;
    std::cout << std::endl;
	energyRemaining(*this);
}