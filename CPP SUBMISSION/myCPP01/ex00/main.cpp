/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:24:08 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/02 11:49:40 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

//Stack memory for static vars
//Heap memory for dynamic
//The zombies should be static

int	main()
{
	randomChump("Bill");
	randomChump("Karen");
	randomChump("Mr. Happy");
}