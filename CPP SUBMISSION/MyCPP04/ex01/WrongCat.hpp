/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:55 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:50:17 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

public:
	//Construct
	WrongCat( void );

	//Destruct
	~WrongCat( void );

	//Copy
	WrongCat( const WrongCat &copy );
	//Overload copy
	WrongCat &operator=( const WrongCat &copy );

	//Member Functions
	void	makeSound( void ) const;
};

#endif