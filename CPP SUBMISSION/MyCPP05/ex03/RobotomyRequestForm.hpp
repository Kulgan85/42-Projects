/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:34:03 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/10 13:35:30 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class RobotomyRequestForm: public Form {
	
	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &copy );
		virtual ~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=( const RobotomyRequestForm &assign );

		void	beSigned( const Bureaucrat &bur );
		void	execute( Bureaucrat const &executor ) const;

	private:

		RobotomyRequestForm( void );

};

#endif
