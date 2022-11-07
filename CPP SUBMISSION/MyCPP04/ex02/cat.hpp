/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:15:53 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/15 15:24:29 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "brain.hpp"

class Cat: public Animal {
	
	private:

		Brain	*catBrain;

	public:

		Cat( void );
		virtual ~Cat( void );
		
		Cat( const Cat &copy );
		Cat &operator=( const Cat &copy );

		void	makeSound( void ) const;
		void	printThought( void ) const;

};

#endif