/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:43:45 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 12:00:36 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "brain.hpp"

class Animal
{
    private:

    protected:
        std::string	type;

    public:
    //Construct
        Animal( void );
        Animal( std::string type );

    //Destruct
        virtual ~Animal( void );

    //Member Functions
        virtual void makeSound( void ) const = 0;

    //Gets
        std::string	getType( void ) const;

    //Operator Copy
	Animal &operator=( const Animal &copy );
};

#endif