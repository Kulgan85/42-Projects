/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:33 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:04:08 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Construct
Fixed::Fixed() 
{
    std::cout << "Default constructor called: Generating the will to do something" << std::endl;
    this->number = 0;
    return;
}

//Copy Constructor
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called: Generating even more will" << std::endl;
    this->number = copy.getRawBits();
    return;
}


//Destruct
Fixed::~Fixed()
{
    std::cout << "Destructor called: Self destructing" << std::endl;
    return ;
}

//Copy Assignment Operator (CAO)
Fixed&	Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy Assignment Operator called: Copying Pasquale's github" << std::endl;
    this->number = copy.getRawBits();
    return (*this);
}

//Get
int Fixed::getRawBits( void ) const
{
    std::cout << "GetRawBits member function called: Getting all the bits" << std::endl;
    return (this->number);
}

//Set
void    Fixed::setRawBits( int const raw )
{
    std::cout << "SetRawBits member function called: Setting all the bits" << std::endl;
    this->number = raw;
}