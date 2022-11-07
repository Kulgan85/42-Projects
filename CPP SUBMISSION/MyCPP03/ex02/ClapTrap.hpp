/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:55:47 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/12 11:18:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HEADER
# define CLAPTRAP_HEADER

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define RESET "\033[0m"
#define UNDERLINE "\033[4m"

#include <iostream>
#include <string>

class ClapTrap {
	public:
	//Construct
		ClapTrap(void);
		ClapTrap(std::string name);

	//Copy
		ClapTrap(const ClapTrap& copy);

	//Destruct
		~ClapTrap(void);

	//Operator overload of = to assign things to Class type (ClapTrap)
		ClapTrap&	operator = (const ClapTrap& assign);

	//Get
		std::string getName(void) const;
		int			getHP(void) const;
		int			getATK(void) const;
		int			getEP(void) const;
	//Set
		void	setName(std::string name);
		void	setHP(int HP);
		void	setEP(int EP);
	//Member functions

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
	//Members
		std::string 	name;
		int 			HP;
		int 			ATK;
		int 			EP;
};
void	energyRemaining( ClapTrap &current );

#endif
