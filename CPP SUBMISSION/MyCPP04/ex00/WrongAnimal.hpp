/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:50:44 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:34:32 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include "Animal.hpp"

class WrongAnimal
{
    private:
        std::string	sound;

    protected:
        std::string	type;

    public:
    //Construct
        WrongAnimal( void );
        WrongAnimal( std::string type );
    
    //Destruct
        virtual ~WrongAnimal( void );

    //Member Functions
        void		makeSound( void ) const;
    
    //Sets
        void		setSound( std::string sound );

    //Gets
        std::string	getSound( void ) const;
        std::string	getType( void ) const;
};

#endif