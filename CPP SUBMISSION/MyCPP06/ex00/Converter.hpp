/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:17:21 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 10:34:12 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <sstream>

class Scalar 
{
	public:
		Scalar( void );
		Scalar( std::string arg );
		Scalar( const Scalar &copy );
		~Scalar( void );

		Scalar	&operator=( const Scalar &assign );

		class Unconvertable: public std::exception 
        {
			char const *what(void) const throw();
		};

		class Unprintable: public std::exception 
        {
			char const *what(void) const throw();
		};

		char	charConvert( void );
		int		intConvert( void );
		float	floatConvert( void );
		double	doubleConvert( void );
		bool	validCheck( void );

	private:
		std::string	input;
};

std::string	checkChar(char *arg);

#endif
