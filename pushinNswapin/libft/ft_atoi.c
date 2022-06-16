/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:26:38 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 16:10:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Turns string <str> into an int */
int	ft_atoi(const char *str)
{
	long long unsigned	output;
	char				isneg;

	output = 0;
	isneg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		output *= 10;
		output += *str - 48;
		if (output + 1 > 9223372036854775807 && isneg == -1)
			return (0);
		else if (output > 9223372036854775807)
			return (-1);
		str++;
	}
	return ((int)output * isneg);
}
