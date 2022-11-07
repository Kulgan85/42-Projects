/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:46:38 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 12:17:40 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombHead
# define ZombHead
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
	//Construct
		Zombie();
	
	//Set
		void		setName(std::string newName);

	//Get
		std::string	getName(void);

	//Other Functions
		void		announce(void);

	//Destruct
		~Zombie();
};

Zombie *ZombieHorde(int N, std::string name);


#endif