/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:26 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:39:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	
	private:

		Brain	*kattBrain;

	public:
		//Construct
		Cat( void );
		//Destruct
		virtual ~Cat( void );
		
		//Copy
		Cat( const Cat &copy );
		//Overload Copy
		Cat &operator=( const Cat &copy );

		//Member Functions
		void	makeSound( void ) const;
		void	printThought( void ) const;
		//Gets
		Brain *getBrain(void);

};

#endif
