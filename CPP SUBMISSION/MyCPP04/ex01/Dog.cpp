/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:16 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:59:36 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	this->type = "Dog";
	this->dogBrain = new Brain;
	std::cout << "This is a " << this->type << "!" << std::endl;
}

Dog::~Dog( void ) {
	delete this->dogBrain;
	std::cout << "A " << this->type << " ran off leash" << std::endl;

}

Dog::Dog( const Dog &copy ) {
	this->type = copy.type;
	this->dogBrain = new Brain;
	this->dogBrain = copy.dogBrain;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
}

Dog &Dog::operator=( const Dog &copy ) {
	this->type = copy.type;
	this->dogBrain = new Brain;
	this->dogBrain = copy.dogBrain;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}

void		Dog::makeSound( void ) const{
	std::cout << "The " << this->type << " goes bork!" << std::endl;
}

void	Dog::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << "The " << this->type << " is thinking about ";
	this->dogBrain->randomThought(i);
	std::cout << std::endl;
}