/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:44:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/07 13:51:24 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "wrongCat.hpp"

int	main(void)
{
	
	//Animal	broke;
	Animal	*not_broke;
	not_broke = new Cat();
	Animal	*also_not_broke = new Dog();

	Cat	still_works;
	Dog	also_still_works;

	delete not_broke;
	delete also_not_broke;

	return 0;

}