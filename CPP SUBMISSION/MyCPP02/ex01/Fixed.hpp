/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:04:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	public:
	//Construct
		Fixed( void );
		Fixed( const int whole);
		Fixed( const float decimal);

	//Copy Construct
		Fixed( const Fixed& copy );

	//Destruct
		~Fixed( void );

	//Copy Assign OP
		Fixed&	operator=( const Fixed& copy );

	//Get
		int getRawBits( void ) const;

	//Set
		void setRawBits( int const raw );

	//Member Functions
		float toFloat(void) const;
		int toInt(void) const;

	private:
	//Function Members
		int number;
		static const int fracbits = 8;
};

std::ostream &operator << (std::ostream &os, const Fixed &obj );

#endif
