/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:41:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:19:19 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

//Define Bureaucrat to prevent circular inclusion
class Bureaucrat;

class Form 
{
	public:
		Form( std::string name, int signGrade, int exeGrade );
		Form( const Form &copy );
		~Form( void );

		std::string			getName( void ) const;
		int					getSignGrade( void ) const;
		int 				getExeGrade( void ) const;
		bool				getSigned( void ) const;

		bool				checkGrade( int Ingrade );
		void				setSigned( bool Insign );

		void				beSigned( const Bureaucrat &bur );

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

		Form( void );

		std::string const	name;
		int const			signGrade;
		int const			exeGrade;
		bool				isSigned;
		// = operator private as const. fields cannot be copied
		Form	&operator=( const Form &assign );
};

std::ostream	&operator << ( std::ostream &stream, const Form &form );

#endif
