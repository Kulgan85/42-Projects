/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:17:23 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 11:42:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Scalar::Scalar()
{
    std::cout << "Hello and welcome to the scalar converter. My name is Scalar Converter and I will be your converter for today" << std::endl;
}

Scalar::Scalar(const Scalar &copy) 
{
	input = copy.input;
}

Scalar::~Scalar() 
{
    std::cout << "Thankyou for using scalar converter's services. We hope to see you again" << std::endl;
}

Scalar	&Scalar::operator=(const Scalar &assign) 
{
	input = assign.input;
	return (*this);
}

Scalar::Scalar( std::string arg ) 
{
	input = arg;
}

char const *Scalar::Unconvertable::what(void) const throw() 
{
	return ("I can't convert that");
}

char const *Scalar::Unprintable::what(void) const throw() 
{
	return ("I cannot print that");
}

char	Scalar::charConvert( void ) 
{
	float	f = doubleConvert();
	if (isnan(f) || isinf(f))
		throw Unprintable();
	if (f < 33 || f > 126)
		throw Unconvertable();
	return (static_cast<char>(f));
}

int	Scalar::intConvert( void ) 
{
	float f = doubleConvert();
	if (isnan(f) || isinf(f))
		throw Unprintable();
	if (f < -2147483648 || f > 2147483647)
		throw Unconvertable();
	return (static_cast<int>(f));
}

float	Scalar::floatConvert( void ) 
{
	return (static_cast<float>(doubleConvert()));
}

double	Scalar::doubleConvert( void ) 
{
	double	d = atof(input.c_str());
	return (d);
}

std::string	checkChar(char *arg) 
{
	if (arg[0] && !arg[1])
	{
		if (isprint(arg[0]) && !isdigit(arg[0]))
		{
			std::stringstream tmp;
			tmp << (int)arg[0];
			std::string ret = tmp.str();
			return (ret);
		}
	}
	return (arg);
}

bool		Scalar::validCheck( void ) 
{
	if (!input[1])
		return (true);
	if (this->doubleConvert())
		return (true);
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]) && input[i] != '-'
			&& input[i] != '.' && input[i] != '+')
			return (false);
	}
	return (true);
}