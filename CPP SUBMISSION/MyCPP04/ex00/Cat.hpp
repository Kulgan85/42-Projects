/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:49:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:34:44 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat: public Animal
{
    public:
    //Construct
        Cat( void );
    
    //Destruct
        virtual ~Cat( void );
    
    //Copy
    Cat( const Cat &copy );

    //Overload Copy
	Cat &operator=( const Cat &copy );

    //Member Function
	void		makeSound( void ) const;
};

#endif