/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:23:55 by tbertozz          #+#    #+#             */
/*   Updated: 2022/08/26 15:24:59 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombHead
# define ZombHead
# include <string>
# include <iostream>

class	Zombie
{
	public:
		//Construct
		Zombie(std::string name);

		//Destruct
		~Zombie();

		//Class Specific Functions
		void    announce(void);

	private:
		//Members(priv)
		std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif