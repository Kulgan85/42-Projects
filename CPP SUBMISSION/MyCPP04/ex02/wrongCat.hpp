/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:19:58 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/15 14:23:38 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat: public wrongAnimal{

public:

	wrongCat( void );
	~wrongCat( void );

	wrongCat( const wrongCat &copy );
	wrongCat &operator=( const wrongCat &copy );

	void	makeSound( void ) const;
	
};

#endif