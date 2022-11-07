/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:46 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 16:30:34 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> b(3);
	
    std::cout << "TESTING OUT OF BOUNDS INDEX" << "\e[0m" << std::endl;
	try
	{
		std::cout << b[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "PRINTING USING [] OPERATOR" << "\e[0m" << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << "DEEP COPYING ARRAY" << "\e[0m" << std::endl;
	Array<int>	c = b;
	std::cout << "CHANGING VALUE USING [] OPERATOR" << "\e[0m" << std::endl;
	c[0] = 10;
	std::cout << "PRINTING SAME INDEX OF BOTH ARRAYS WITH CHANGED VALUE" << "\e[0m" << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << c[0] << std::endl;
    std::cout << "ADDING MORE VALUES" << "\e[0m" << std::endl;
    b[1] = 200;
    b[2] = 210;
    std::cout << "B[1] = " << b[1] << std::endl;
    std::cout << "B[2] = " << b[2] << std::endl;
	return (0);
}