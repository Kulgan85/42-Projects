/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:54 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:32:40 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

protected:

	std::string	type;

public:

	//Construct
	Animal( void );
	Animal( std::string &type );
	
	//Copy
	Animal( const Animal &copy );

	//Destruct
	virtual ~Animal( void );

	//Overload Copy
	Animal &operator=( const Animal &copy );

	//Member Functions
	virtual void	makeSound( void ) const;

	//Get
	std::string		getType( void ) const;
};

#endif