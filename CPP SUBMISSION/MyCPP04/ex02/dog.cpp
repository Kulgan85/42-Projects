/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:04:52 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 11:24:13 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "It appears to be a " << this->type << "!" << std::endl;
}

Dog::~Dog(void)
{
	delete this->dogBrain;
	std::cout << "A " << this->type << " has gone on a walk" << std::endl;
}

Dog::Dog( const Dog &copy ) {
	this->type = copy.type;
	this->dogBrain = new Brain;
	this->dogBrain = copy.dogBrain;
	std::cout << "A " << this->type << " was copied!" << std::endl;
    std::cout << std::endl;
}

Dog &Dog::operator=( const Dog &copy ) {
	this->type = copy.type;
	this->dogBrain = new Brain;
	this->dogBrain = copy.dogBrain;
    std::cout << "A " << this->type << " got copied!" << std::endl;
    std::cout << std::endl;
	return (*this);
}

void		Dog::makeSound( void ) const
{
	std::cout << "The" << this->type << " goes woof" << std::endl;
}

void	Dog::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << this->type << " is thinking about ";
	this->dogBrain->randomThought(i);
	std::cout << std::endl;
}