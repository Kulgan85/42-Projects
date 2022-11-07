/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:47:20 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:06:43 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	//Construct Larry and a form
	Bureaucrat	Larry("Larry", 25);
	Form		paper("WTFFML01", 24, 1);

	//Try a bunch of exceptions
	std::cout << Larry << std::endl << paper << std::endl;
	try
	{
		Form	reject("No", -10, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Larry.signForm(paper);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		paper.beSigned(Larry);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Larry++;
	Larry.signForm(paper);
	paper.beSigned(Larry);

	return (0);
}