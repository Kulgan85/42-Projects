/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:34:59 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 14:27:57 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form {

	public:
		
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );
		virtual ~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &assign );

		void	beSigned( const Bureaucrat &bur );
		void	execute( Bureaucrat const &executor ) const;

	private:

		ShrubberyCreationForm( void );
};

#endif
