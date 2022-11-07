/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:58:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:04:06 by tbertozz         ###   ########.fr       */
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

	private:
	//Function Members
		int number;
		static const int fracbits = 8;
};

#endif
