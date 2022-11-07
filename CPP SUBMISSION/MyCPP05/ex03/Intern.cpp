/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:11:36 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:53:38 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) 
{
	std::cout << "Background NPC Intern was hired" << std::endl;
}

Intern::Intern(const Intern &copy) 
{
	(void)copy;
	std::cout << "The background is looking more populated..." << std::endl;
}

Intern::~Intern( void ) 
{
	std::cout << "Another intern has died... No biggie " << std::endl;
}

Intern	&Intern::operator=(const Intern &assign) 
{
	(void)assign;
	return (*this);
}

Form	*Intern::makeForm( const std::string &name, const std::string &target ) 
{
	int	idx = 0;
	Form	*returnForm;
	std::string form_types[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (!name.compare(form_types[i]))
			break ;
		idx++;
	}
	switch (idx)
	{
		case 0:
			std::cout << "New " << name << " form was made by the NPC intern" << std::endl;
			returnForm = new ShrubberyCreationForm(target);
			return (returnForm);
			break;
		case 1:
			std::cout << "New " << name << " form was made by the NPC intern" << std::endl;
			returnForm = new RobotomyRequestForm(target);
			return (returnForm);
			break;
		case 2:
			std::cout << "New " << name << " form was made by the NPC intern" << std::endl;
			returnForm = new PresidentialPardonForm(target);
			return (returnForm);
			break;
		default:
			std::cout << "The form; " << name << " doesn't exist!" << std::endl;
			return (NULL);
			break;
	}
}