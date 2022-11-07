/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:16:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 11:24:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->catBrain = new Brain();
	std::cout << "It seems to be a " << this->type << "!" << std::endl;
}

Cat::~Cat(void)
{
	delete this->catBrain;
	std::cout << "A " << this->type << " climbed a tree" << std::endl;
}

Cat::Cat( const Cat &copy ): catBrain(new Brain()) {
	this->type = copy.type;
	*(this->catBrain) = *(copy.catBrain);
	std::cout << "A " << this->type << " was copied" << std::endl;
    std::cout << std::endl;
}

Cat &Cat::operator=( const Cat &copy ) {
	this->type = copy.type;
	*(this->catBrain) = *(copy.catBrain);
	std::cout << "A " << this->type << " got copied" << std::endl;
    std::cout << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout << "The " << this->type << " goes nyaa~" << std::endl;
}

void	Cat::printThought( void ) const {
	int	i = rand() % 100;
	std::cout << this->type << " is thinking about ";
	this->catBrain->randomThought(i);
	std::cout << std::endl;
}