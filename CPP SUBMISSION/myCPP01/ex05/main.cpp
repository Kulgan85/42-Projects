/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:09:07 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/02 11:26:29 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(void)
{
	Harl	HarlEquin;

	HarlEquin.complain("DEBUG");
	HarlEquin.complain("INFO");
	HarlEquin.complain("WARNING");
	HarlEquin.complain("ERROR");
	HarlEquin.complain("Something else!");

	return (0);
}