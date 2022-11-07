/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:16:58 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:23:18 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HEADER
#define	FRAGTRAP_HEADER

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
    //Construct
        FragTrap( void );
        FragTrap( std::string name );
    
    //Copy
        FragTrap( const FragTrap &copy );

    //Destruct
        ~FragTrap( void );

    //Copy Assignment OP
        FragTrap	&operator=( const ClapTrap &copy );

    //Member Functions
        void highFiveGuys( void );
    
    private:

};

#endif