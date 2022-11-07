/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:48:03 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:

	std::string	type;

public:
	//construct
	WrongAnimal( void );
	WrongAnimal( std::string type );

	//Copy
	WrongAnimal( const WrongAnimal &copy );

	//Destruct
	virtual ~WrongAnimal( void );

	//Overload Copy
	WrongAnimal &operator=( const WrongAnimal &copy );

	//Member Functions
	void		makeSound( void ) const;

	//Get
	std::string	getType( void ) const;
};

#endif