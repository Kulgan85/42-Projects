/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:34:55 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:02:56 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

using namespace std;

ShrubberyCreationForm::ShrubberyCreationForm( std::string Intarget ): Form::Form("SCF", 145, 137) {
	this->target = Intarget;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ): Form::Form("SCF", 145, 137) {
	this->target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

}

void		ShrubberyCreationForm::beSigned( const Bureaucrat &bur ) {

	int	bur_grade = bur.getGrade();
	int	sign_grade = this->getSignGrade();

	if (this->getSigned() == true)
	{
		std::cout << this->getName() << " has already been signed." << std::endl;
		return ;
	}
	if (bur_grade <= sign_grade)
	{
		this->setSigned(true);
	}
	else
	{
		throw Form::GradeTooLowException();
	}
	
}

void		ShrubberyCreationForm::execute( Bureaucrat const &executor ) const{
	
	if (executor.getGrade() <= this->getExeGrade())
	{
		std::string outfile = this->target + "_shrubbery";
		std::ofstream	shrub(outfile);

		std::cout << "Shrub Shrub" << std::endl;
		shrub << 
        "       _-_\n"
        "    (~~   ~~) \n"
        " (~~         ~~) \n"
        "{               } \n"
        " (  _-  .  -_  ) \n"
        "   ~ ~ | | ~ ~ \n"
        "_- -   | | _- _ \n"
        "  _ -  | |   -_ \n"
        "       | | " << std::endl;
		shrub.close();
	}
	else
	{
		std::cout << executor.getName() << "... WE REQUIRE A SHRUBBERY!" << std::endl;
	}
	
}