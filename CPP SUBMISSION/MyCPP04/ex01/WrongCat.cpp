/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:46 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:49:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->type = "Wrong Cat";
	std::cout << "A " << this->type << " appeared!" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "A " << this->type << " has been removed" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &copy ) {
	this->type = copy.type;
	std::cout << "A " << this->type << " has been copied!" << std::endl;
	return (*this);
}

// Will not occur as base class takes priority

void		WrongCat::makeSound( void ) const {
	std::cout << this->type << " -PARALYSIS DEMON NOISES-" << std::endl;
}