/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:24:33 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 14:14:34 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanAhead
# define HumanAhead

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		*heldItem;

	public:
	//Construct
		HumanA(std::string input, Weapon &Item);
	
	//Set
		void	setWeapon(Weapon &Item);

	//Destruct
		~HumanA(void);

	//Member Functions
		void	attack();
};

#endif