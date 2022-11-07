/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:45 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:03:35 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string Intarget ): Form::Form("PPF", 25, 5) 
{
	this->target = Intarget;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ): Form::Form("PPF", 25, 5) 
{
	this->target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm( void ) 
{

}

void		PresidentialPardonForm::beSigned( const Bureaucrat &bur ) 
{

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

void		PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
	
	if (executor.getGrade() <= this->getExeGrade())
	{
		std::cout << target << " got the presidential pardon by Zaphod Beeblebrox after becoming a turkey. " << std::endl;
	}
	else
	{
		std::cout << target << "'s plan to become a turkey, to receive the presidential pardon on thanksgiving, failed" << std::endl;
	}
	
}