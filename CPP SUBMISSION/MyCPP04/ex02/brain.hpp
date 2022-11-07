/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:26:34 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/15 14:23:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		Brain( void );
		Brain( const Brain &copy );
		~Brain( void );

		Brain	&operator=( const Brain &assign );

		void	randomThought( int index ) const;

	private:
		std::string	ideas [100];

};

#endif
