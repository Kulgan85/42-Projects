/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:03:53 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:08:53 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( int Ingrade ): name("Basic evil mob") 
{
	checkGrade(Ingrade);
	grade = Ingrade;
	std::cout << "A " << this->name << " was created with a grade of: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int Ingrade ): name(name) 
{
	checkGrade(Ingrade);
	grade = Ingrade;
	std::cout << "The named bureaucrat: '" << this->name << "' was created with a grade of: " << this->grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.getName()) 
{
	this->grade = copy.getGrade();
	std::cout << this->name << " was copied with a grade of: " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat( void ) 
{
	std::cout << this->name << " was defeated by the protagonist!" << std::endl;
}

void		Bureaucrat::setGrade( int Ingrade ) 
{
	if (checkGrade(Ingrade))
	{
		this->grade = Ingrade;
		std::cout << name << " is now a grade " << this->grade << std::endl;
	}
	else
	{
		std::cout << "Grade hasn't changed" << std::endl;
	}
}

std::string	Bureaucrat::getName( void ) const 
{
	return (this->name);
}

int			Bureaucrat::getGrade( void ) const 
{
	return (this->grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &assign) 
{
	this->grade = assign.getGrade();
	std::cout << this->name << " is now the same grade as " << assign.getName() << ", Grade "<< this->grade << std::endl;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++( int ) 
{
	if (checkGrade(this->grade - 1))
	{
		this->grade--;
	}
	return (*this);
}

Bureaucrat	&Bureaucrat::operator--( int ) 
{
	if (checkGrade(this->grade + 1))
	{
		this->grade++;
	}
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Bureaucrat's grade is too high. The protagonist can't defeat that!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Bureaucrat's grade is too low. That's too easy for the protagonist!");
}

bool	Bureaucrat::checkGrade( int grade ) 
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return (false);
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return (false);
	}
	return (true);
}

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur ) 
{
	stream << bur.getName() << ", Bureaucrat grade " << bur.getGrade();
	return (stream);
}