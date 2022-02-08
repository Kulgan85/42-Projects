/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:56:55 by tbertozz          #+#    #+#             */
/*   Updated: 2021/10/26 15:33:59 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_chr(t_print *table)
{
	char	c;

	c = va_arg(table->args, int);
	ft_putchar_fd(c, 1);
	table->count += 1;
}

void	ft_s(t_print *table)
{
	char	*str;

	str = va_arg(table->args, char *);
	if (str != NULL)
	{
		ft_putstr_fd(str, 1);
		table->count += ft_strlen(str);
	}
	else
	{
		ft_putstr_fd("(null)", 1);
		table->count += 6;
	}
}
