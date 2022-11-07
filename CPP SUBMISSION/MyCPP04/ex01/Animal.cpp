/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:26:00 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:30:58 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	this->type = "Basic animal";
	std::cout << "A " << this->type << " has been born!" << std::endl;
}

Animal::Animal( const Animal &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
}

Animal::Animal ( std::string &type ) {
	this->type = type;
	std::cout << "A " << this->type << " is born" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "A " << this->type << " has disintegrated" << std::endl;

}

void		Animal::makeSound( void ) const {
	std::cout << "The " << this->type << " goes -insert animal noise-" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}

Animal &Animal::operator=( const Animal &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}