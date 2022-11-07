/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:33 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:58:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	this->type = "Cat";
	this->kattBrain = new Brain();
	std::cout << "It's a " << this->type << "!" << std::endl;
}

Cat::~Cat( void ) {
	delete this->kattBrain;
	std::cout << "A " << this->type << " climbed the tree :(" << std::endl;
}

Cat::Cat( const Cat &copy ): kattBrain(new Brain()) {
	this->type = copy.type;
	*(this->kattBrain) = *(copy.kattBrain);
	std::cout << "A " << this->type << " has been copied!" << std::endl;
}

Cat &Cat::operator=( const Cat &copy ) {
	this->type = copy.type;
	*(this->kattBrain) = *(copy.kattBrain);
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << this->type << " goes nya~" << std::endl;
}

void	Cat::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << "The " << this->type << " is thinking about ";
	this->kattBrain->randomThought(i);
	std::cout << std::endl;
}

Brain * Cat::getBrain(void)
{
	return this->kattBrain;
}
