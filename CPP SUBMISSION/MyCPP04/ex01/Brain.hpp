/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:25:41 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:36:38 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		//Contruct
		Brain( void );
		//Copy
		Brain( const Brain &copy );
		//Destruct
		~Brain( void );

		//Overload Operator
		Brain	&operator=( const Brain &assign );

		//Member Function
		void	randomThought( int index ) const;

	private:
		std::string	_ideas[100];
};

#endif
