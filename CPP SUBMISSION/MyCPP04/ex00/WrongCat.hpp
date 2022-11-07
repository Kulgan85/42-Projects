/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:50:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:34:18 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
    //Construct
        WrongCat( void );

    //Destruct
        virtual ~WrongCat( void );

    //Copy
    WrongCat( const WrongCat &copy );

    //Overload Copy
	WrongCat &operator=( const WrongCat &copy );

    //Member Functions
	void	makeSound( void ) const;
};

#endif