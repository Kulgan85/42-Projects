/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:43:45 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:34:47 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string	type;

    public:
    //Construct
        Animal( void );
        Animal( std::string type );

    //Destruct
        virtual ~Animal( void );

    //Member Functions
	virtual void	makeSound( void ) const;

    //Gets
        std::string	getType( void ) const;
};

#endif