/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:41:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:32:38 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

// Stop include loop
class Bureaucrat;

class Form {

	public:
		Form( std::string name, int signGrade, int exeGrade );
		Form( const Form &copy );
		virtual ~Form( void );

		Form	&operator=( const Form &assign );

		virtual std::string	getName( void ) const;
		virtual int			getSignGrade( void ) const;
		virtual int 		getExeGrade( void ) const;
		virtual bool		getSigned( void ) const;
	
		virtual void		setSigned( bool Insign );

		virtual void		beSigned( const Bureaucrat &bur ) = 0;
		virtual void		execute( Bureaucrat const &executor ) const = 0;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	private:

		// Not used at all but OCF standards require it
		Form( void );

		std::string const	name;
		int const			signGrade;
		int const			exeGrade;
		bool				isSigned;

	protected:

		std::string	target;

		void		setTarget( std::string target );
		std::string	getTarget( void ) const;

};

std::ostream	&operator << ( std::ostream &stream, const Form &form );

#endif