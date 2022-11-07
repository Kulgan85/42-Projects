/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:23:45 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:03:51 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

//Construct
Fixed::Fixed() 
{
    //std::cout << "Default constructor called: Generating the will to do something" << std::endl;
    this->number = 0;
    return;
}

//Copy Constructor
Fixed::Fixed(const Fixed& copy)
{
    //std::cout << "Copy constructor called: Generating even more will" << std::endl;
    this->number = copy.getRawBits();
    return;
}

Fixed::Fixed( const int whole )
{
    //std::cout << "Int constructor called: Drowning in the Integers!" << std::endl;
    this->number = whole << Fixed::fracbits;
    return ;
}

Fixed::Fixed( const float decimal )
{
    //std::cout << "Float constructor called: Floating to the surface!" << std::endl;
    this->number = round(decimal * (1 << Fixed::fracbits));
    return ;
}

//Destruct
Fixed::~Fixed(void)
{
    //std::cout << "Destructor called: Self destructing" << std::endl;
    return ;
}

//Copy Assignment Operator (CAO)
Fixed&	Fixed::operator=(const Fixed& copy)
{
    //std::cout << "Copy Assignment Operator called: Copying Pasquale's github" << std::endl;
    this->number = copy.getRawBits();
    return (*this);
}

//Get
int Fixed::getRawBits( void ) const
{
    //std::cout << "GetRawBits member function called: Getting all the bits" << std::endl;
    return (this->number);
}

//Set
void    Fixed::setRawBits( int const raw )
{
    //std::cout << "SetRawBits member function called: Setting all the bits" << std::endl;
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

//Operator overloading: ( + )
float   Fixed::operator + ( const Fixed &obj) const
{
    return (this->toFloat() + obj.toFloat());
}

//Operator overloading ( - )
float   Fixed::operator - ( const Fixed &obj) const
{
    return (this->toFloat() - obj.toFloat());
}

//Operator overloading ( / )
float   Fixed::operator / ( const Fixed &obj) const
{
    return (this->toFloat() / obj.toFloat());
}

//Operator overloading ( * )
float   Fixed::operator * ( const Fixed &obj) const
{
    return (this->toFloat() * obj.toFloat());
}

//Operator overloading ( > )
bool    Fixed::operator > (Fixed &obj) const
{
    return(this->getRawBits() > obj.getRawBits());
}

//Operator overloading ( < )
bool    Fixed::operator < (Fixed &obj) const
{
    return(this->getRawBits() < obj.getRawBits());
}

//Operator overloading ( >= )
bool    Fixed::operator >= (Fixed &obj) const
{
    return(this->getRawBits() >= obj.getRawBits());
}

//Operator overloading ( <= )
bool    Fixed::operator <= (Fixed &obj) const
{
    return(this->getRawBits() <= obj.getRawBits());
}

//Operator overloading ( == )
bool Fixed::operator == (Fixed &obj) const
{
    return(this->getRawBits()==obj.getRawBits());
}

//Operator overloading ( != )
bool Fixed::operator != (Fixed &obj) const
{
    return (this->getRawBits() != obj.getRawBits());
}

//Operator overloading ( ++ )
float Fixed::operator ++ (void)
{
    this->number++;
    return(this->toFloat());
}

//Operator overloading ( -- )
float Fixed::operator -- (void)
{
    this->number--;
    return(this->toFloat());
}

//Operator overloading ( ++ )
float Fixed::operator ++ (int)
{
    float original = this->number;
    this->number++;
    return(original);
}

//Operator overloading ( -- )
int Fixed::operator -- (int)
{
    int original = this->number;
    this->number--;
    return(original);
}

//Min
const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1.getRawBits() < obj2.getRawBits())
        return (obj1);
    return (obj2);
}

Fixed &Fixed::min( Fixed &obj1, Fixed &obj2)
{
    if(obj1 < obj2)
        return(obj1);
    return (obj2);
}

//Max
const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1.getRawBits() > obj2.getRawBits())
        return (obj1);
    return (obj2);
}

Fixed &Fixed::max( Fixed &obj1, Fixed &obj2)
{
    if(obj1 > obj2)
        return(obj1);
    return (obj2);
}

//Overload the << to insert floating-point representation of 
//Fixed point number into output stream object that was passed
//https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
std::ostream& operator << (std::ostream& outstream, const Fixed& obj)
{
    outstream << obj.toFloat();
    return (outstream);
}


