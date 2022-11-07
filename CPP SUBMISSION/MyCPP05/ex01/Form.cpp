/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:41:28 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:28:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int signGrade, int exeGrade ): name(name), signGrade(signGrade), exeGrade(exeGrade) 
{
	this->checkGrade(signGrade);
	this->checkGrade(exeGrade);
	this->isSigned = false;
	
    std::cout << std::endl;
	std::cout << "Form Created!" << std::endl
	<< "Form Name: " << this->name << std::endl
	<< "Grade Required for Signing: " << this->signGrade << std::endl
	<< "Grade Required for Executing: " << this->exeGrade << std::endl
	<< "Signed Status: " << this->isSigned << std::endl;
	std::cout << std::endl;
}

Form::Form( const Form &copy ): name(copy.getName()), signGrade(copy.getSignGrade()), exeGrade(copy.getExeGrade()) 
{
	this->checkGrade(signGrade);
	this->checkGrade(exeGrade);
	this->isSigned = copy.getSigned();
	std::cout << std::endl;
	std::cout << "Form copy made." << std::endl
	<< "Name: " << this->name << std::endl
	<< "Grade Required for Signing: " << this->signGrade << std::endl
	<< "Grade Required for Executing: " << this->exeGrade << std::endl
	<< "Signed Status: " << this->isSigned << std::endl;
	std::cout << std::endl;
}

Form::~Form( void ) 
{
	std::cout << std::endl;
	std::cout << this->name << " has been ripped up and thrown out..." << std::endl;
	std::cout << std::endl;
}

std::string			Form::getName( void ) const
{
	return (this->name);
}

int					Form::getSignGrade( void ) const
{
	return (this->signGrade);
}

int 				Form::getExeGrade( void ) const
{
	return (this->exeGrade);
}

bool				Form::getSigned( void ) const
{
	return (this->isSigned);
}

void				Form::setSigned( bool sign )
{
	this->isSigned = sign;
}

void				Form::beSigned( const Bureaucrat &bur )
{
	
	if (this->isSigned == true)
	{
		std::cout << this->name << " has already been signed." << std::endl;
		return ;
	}
	
	int	bur_grade = bur.getGrade();

	if (bur_grade > this->signGrade)
	{
		std::cout << bur.getName() << " is not a high enough grade to sign " << this->name << ". Their grade is " << bur_grade
		<< ". Required grade must be: " << this->signGrade << " or higher." << std::endl;
		throw Form::GradeTooLowException();
	}
	else if (bur_grade <= this->signGrade && bur_grade > 0)
	{
		this->isSigned = true;
		std::cout << bur.getName() << " has signed " << this->name << std::endl;
	}
	else
	{
		throw Form::GradeTooHighException();
	}
}

bool	Form::checkGrade( int grade ) 
{
	if (grade < 1)
	{
		throw Form::GradeTooHighException();
		return (false);
	}
	else if (grade > 150)
	{
		throw Form::GradeTooLowException();
		return (false);
	}
	return (true);
}

const char *Form::GradeTooHighException::what() const throw() 
{
	return ("The form cannot be signed. Reduce the grade to sign!");
}

const char *Form::GradeTooLowException::what() const throw() 
{
	return ("The form cannot be signed. Increase the grade to sign!");
}

std::ostream	&operator << ( std::ostream &stream, const Form &form )
{
	stream
	<< "Form Name: " << form.getName() << std::endl
	<< "Grade Required for Signing: " << form.getSignGrade() << std::endl
	<< "Grade Required for Executing: " << form.getExeGrade() << std::endl
	<< "Signed Status: " << form.getSigned() << std::endl;
	return (stream);
}