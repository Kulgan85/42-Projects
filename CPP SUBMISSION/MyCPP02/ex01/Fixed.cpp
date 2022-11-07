/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:33 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:04:01 by tbertozz         ###   ########.fr       */
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

Fixed::Fixed( const int whole )
{
    std::cout << "Int constructor called: Drowning in the Integers!" << std::endl;
    this->number = whole << Fixed::fracbits;
    return ;
}

Fixed::Fixed( const float decimal )
{
    std::cout << "Float constructor called: Floating to the surface!" << std::endl;
    this->number = round(decimal * (1 << Fixed::fracbits));
    return ;
}

//Destruct
Fixed::~Fixed(void)
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

//Int convert
int Fixed::toInt (void) const
{
    return(this->number >> Fixed::fracbits);
}

//Float convert
float Fixed::toFloat (void) const
{
    return((float) this->number / (1 << Fixed::fracbits));
}

//Overload the << to insert floating-point representation of 
//Fixed point number into output stream object that was passed
//https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
std::ostream& operator << (std::ostream& outstream, const Fixed& obj)
{
    outstream << obj.toFloat();
    return (outstream);
}