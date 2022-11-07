/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:08:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:57:36 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	alucard;
	Form	*allForms[3];
	Bureaucrat	Jim("Jim", 138);
	allForms[0] = alucard.makeForm("Shrubbery Creation", "Knights of Nii");
	allForms[1] = alucard.makeForm("Robotomy Request", "Clara");
	allForms[2] = alucard.makeForm("Presidential Pardon", "Rick and Morty");

	allForms[0]->execute(Jim);
	allForms[1]->execute(Jim);
	allForms[2]->execute(Jim);
	Jim.setGrade(5);
	allForms[0]->execute(Jim);
	allForms[1]->execute(Jim);
	allForms[2]->execute(Jim);
	delete allForms[0];
	delete allForms[1];
	delete allForms[2];
	return (0);
}