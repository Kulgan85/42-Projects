/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:11:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:35:27 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
    //Construct
        ScavTrap( void );
        ScavTrap( std::string name );
    
    //Copy
        ScavTrap( const ScavTrap &copy );

    //Destruct
        ~ScavTrap( void );

    //Copy Assignment OP
        ScavTrap	&operator=( const ClapTrap &copy );

    //Member Functions
        void guardGate( void );
    
    private:

};

#endif