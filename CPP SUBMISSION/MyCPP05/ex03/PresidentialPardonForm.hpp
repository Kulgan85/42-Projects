/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:13:14 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:28:08 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class PresidentialPardonForm: public Form 
{
	
	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &copy );
		virtual ~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=( const PresidentialPardonForm &assign );

		void	beSigned( const Bureaucrat &bur );
		void	execute( Bureaucrat const &executor ) const;

	private:

		PresidentialPardonForm( void );

};

#endif
