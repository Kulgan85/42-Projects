/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:08:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:00:12 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat				Jim("Jim", 138);
	RobotomyRequestForm		rob("Clara");
	ShrubberyCreationForm	shrub("Knights of Nii");
	PresidentialPardonForm	elPresidente("Rick and Morty");

	rob.execute(Jim);
	shrub.execute(Jim);
	elPresidente.execute(Jim);
	Jim.setGrade(5);
	shrub.execute(Jim);
	rob.execute(Jim);
	elPresidente.execute(Jim);
	return (0);
}