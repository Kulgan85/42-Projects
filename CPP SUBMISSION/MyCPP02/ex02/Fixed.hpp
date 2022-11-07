/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:03:49 by tbertozz         ###   ########.fr       */
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

	//Min
		Fixed	static &min( Fixed &obj1, Fixed &obj2 );
		const Fixed	static &min( const Fixed &obj1, const Fixed &obj2 );

	//Max
		Fixed	static &max( Fixed &obj1, Fixed &obj2 );
		const Fixed	static &max( const Fixed &obj1, const Fixed &obj2 );

	//Overloaded Operators
		float	operator + ( const Fixed &obj ) const ;
		float	operator - ( const Fixed &obj ) const ;
		float	operator / ( const Fixed &obj ) const ;
		float	operator * ( const Fixed &obj ) const ;
		bool 	operator > ( Fixed &obj ) const ;
		bool 	operator < ( Fixed &obj ) const ;
		bool 	operator >= ( Fixed &obj ) const ;
		bool 	operator <= ( Fixed &obj ) const ;
		bool 	operator == ( Fixed &obj ) const ;
		bool 	operator != ( Fixed &obj ) const ;
		float	operator ++ ( void );
		float	operator -- ( void );
		float	operator ++ ( int );
		int		operator -- ( int );

	private:
	//Function Members
		int number;
		static const int fracbits = 8;


};

std::ostream &operator << (std::ostream &os, const Fixed &obj );

#endif
