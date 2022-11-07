/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:06:12 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:32:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
	
	public:
		Bureaucrat( int grade );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

		Bureaucrat	&operator=( const Bureaucrat &assign );
		Bureaucrat	&operator++( int );
		Bureaucrat	&operator--( int );

		void		setGrade( int grade );

		std::string	getName( void ) const;
		int			getGrade( void ) const;

		bool		checkGrade( int grade );
		void		signForm( Form &form );
		void		executeForm( Form const &form );

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
