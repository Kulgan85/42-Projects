/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:20:48 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 12:08:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal {

protected:

	std::string	type;

public:
	//Construct
	wrongAnimal( void );
	wrongAnimal( std::string type );
	
	//Copy
	wrongAnimal( const wrongAnimal &copy );
	
	//Destruct
	virtual ~wrongAnimal( void );

	//Overload Copy
	wrongAnimal &operator=( const wrongAnimal &copy );

	//Member Functions
	void		makeSound( void ) const;
	
	//Get
	std::string	getType( void ) const;
};

#endif