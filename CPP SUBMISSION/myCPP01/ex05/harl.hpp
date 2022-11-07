/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:52:39 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 16:12:34 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HarlHead
# define HarlHead

#include <iostream>

class Harl
{
	public:

	//Construct
		Harl(void);
		
	//Destruct
		~Harl(void);

	//Member Functions
		void    complain( std::string level );

	private:

	//Member Functions
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif