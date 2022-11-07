/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:04:37 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 14:38:51 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanBhead
# define HumanBhead

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		*heldItem;

	public:
	//Construct
		HumanB(std::string Input);
	
	//Set
		void	setWeapon(Weapon &Item);

	//Destruct
		~HumanB(void);

	//Member Functions
		void	attack();
};

#endif