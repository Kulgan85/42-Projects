/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:13:38 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/15 15:25:48 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "brain.hpp"

class Dog: public Animal {

	private:

		Brain	*dogBrain;

	public:

		Dog( void );
		virtual ~Dog( void );

		Dog( const Dog &copy );
		Dog &operator=( const Dog &copy );

		void	makeSound( void ) const;
		void	printThought( void ) const;

};

#endif