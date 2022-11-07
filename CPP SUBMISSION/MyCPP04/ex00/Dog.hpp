/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:48:41 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 10:48:42 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{

public:

	Dog( void );
	virtual ~Dog( void );

	Dog( const Dog &copy );
	Dog &operator=( const Dog &copy );

	void		makeSound( void ) const;

};

#endif