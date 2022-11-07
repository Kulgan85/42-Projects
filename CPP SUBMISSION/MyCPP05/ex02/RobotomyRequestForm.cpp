/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:33:47 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:58:33 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string Intarget ): Form::Form("RRF", 72, 45) 
{
	this->target = Intarget;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ): Form::Form("RRF", 72, 45) 
{
	this->target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm( void ) 
{

}

void		RobotomyRequestForm::beSigned( const Bureaucrat &bur ) 
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

void		RobotomyRequestForm::execute( Bureaucrat const &executor ) const{
	
	if (executor.getGrade() <= this->getExeGrade())
	{
		srand(time(0));
		int	random = rand() % 2;

		std::cout << "--drilling and screaming noises--" << std::endl;
		if (random)
		{
			std::cout << target << " was successfully upgraded!" << std::endl;
		}
		else
		{
			std::cout << target << " was unsuccessfully upgraded due to interference by The Doctor!" << std::endl;
		}
	}
	else
	{
		std::cout << target << " did not want to be upgraded, they must be deleted!" << std::endl;
	}

}
