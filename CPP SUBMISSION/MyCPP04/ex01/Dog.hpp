/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:09 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:42:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

	private:

		Brain	*dogBrain;

	public:
		//Construct
		Dog( void );
		//Destruct
		virtual ~Dog( void );

		//Copy
		Dog( const Dog &copy );
		//Overload Copy
		Dog &operator=( const Dog &copy );
		//Member Functions
		void	makeSound( void ) const;
		void	printThought( void ) const;
};

#endif