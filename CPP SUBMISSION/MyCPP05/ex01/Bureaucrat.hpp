/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:49:48 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 10:55:30 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat 
{
	public:
		Bureaucrat( int Ingrade );
		Bureaucrat( std::string Inname, int Ingrade );
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

		Bureaucrat	&operator=( const Bureaucrat &assign );
		Bureaucrat	&operator++( int );
		Bureaucrat	&operator--( int );

		void		setGrade( int Ingrade );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		bool		checkGrade( int Ingrade );
		void		signForm( Form &form );

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:

		Bureaucrat( void );

		std::string const	name;
		int					grade;

};

std::ostream	&operator << ( std::ostream &stream, const Bureaucrat &bur );

#endif
