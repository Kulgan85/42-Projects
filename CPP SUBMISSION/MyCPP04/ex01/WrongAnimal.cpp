/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:32 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:47:14 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	this->type = "Abomination";
	std::cout << "A " << this->type << " stumbles out of a bush" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
}

WrongAnimal::WrongAnimal ( std::string type ) {
	this->type = type;
	std::cout << "A " << this->type << " stumbles out of a bush" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "A " << this->type << " relinquished its life" << std::endl;
}

void		WrongAnimal::makeSound( void ) const {
	std::cout << this->type << " goes *geiger counter clicking*" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}