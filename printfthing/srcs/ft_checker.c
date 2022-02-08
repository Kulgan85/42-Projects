/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:45:21 by tbertozz          #+#    #+#             */
/*   Updated: 2021/11/02 11:53:21 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(t_print *table, const char *str)
{
	if (*str == 'c')
		ft_c(table);
	else if (*str == 's')
		ft_s(table);
	else if (*str == 'p')
		ft_p(table);
	else if (*str == 'd' || *str == 'i')
		ft_d_i(table);
	else if (*str == 'u')
		ft_u(table);
	else if (*str == 'x' || *str == 'X')
		ft_hexa(table, *str);
	else if (*str == '%')
	{
		ft_putchar_fd('%', 1);
	}
	str++;
}

void	ft_checker(t_print *table, const char *str)
{
	str++;
	if (ft_strchr("cspdiuxX", *str) == 0)
	{
		ft_putchar_fd(*str, 1);
		table->count += 1;
		str++;
	}
	else
	{
		ft_check(table, str);
	}
}
