/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:58:08 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 10:57:23 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\e[1;94m" << "---Testing Constructors---" << "\e[0m" << std::endl;
	Bureaucrat	bob(1);
	
	// A copy should have the same name when being constructed like this
	std::cout << "\e[1;94m" << "---Testing Copying---" << "\e[0m" << std::endl;
	Bureaucrat	steve(bob);
	Bureaucrat	Charles("Charles", 25);
	
	// Name will not change when copied this way
	Charles = bob;
	std::cout << "\e[1;94m" << "---Testing Grade Too High---" << "\e[0m" << std::endl;
	try
	{
		//A grade 'above' 1 is too high (checks)
		bob.setGrade(-10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		// Incrementing the grade higher than 1 (0 or less) will throw an exception
		std::cout << bob++ << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bob << std::endl;
	std::cout << bob-- << std::endl;
	steve.setGrade(150);
	std::cout << "\e[1;94m" << "---Testing Grade Too Low---" << "\e[0m" << std::endl;
	try
	{
		std::cout << steve-- << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		// The contructor will begin to create a new Bureaucrat and then an exception is thrown because the grade will be too low
		Bureaucrat	Gannon("Gannondorf", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\e[1;94m" << "---Testing Destructors---" << "\e[0m" << std::endl;
	return (0);
}