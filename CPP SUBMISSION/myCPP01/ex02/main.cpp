/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:37:31 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/01 12:49:54 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	//Initialise
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPoint = &string;
	std::string	&stringRef = string;

	//Adresses
	std::cout << "Addresses: " << std::endl;
	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of pointer: " << stringPoint << std::endl;
	std::cout << "Address of reference: " << &stringRef << std::endl;

	//Values
	std::cout << "Values: "  << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of pointer: " << *stringPoint << std::endl;
	std::cout << "Value of reference: " << stringRef << std::endl;

	return (0);
}