/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:53:54 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 13:28:03 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WeaponHead
# define WeaponHead

# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
	//Construct
		Weapon(void);
	
	//Set
		void		setType(std::string newType);

	//Get
		std::string	const &getType(void);

	//Destruct
		~Weapon(void);

	//Other Functions
		Weapon(std::string name);
};

#endif