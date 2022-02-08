/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:55:34 by tbertozz          #+#    #+#             */
/*   Updated: 2021/10/26 15:36:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunsigned(unsigned int n, t_print *table)
{
	if (n >= 10)
	{
		ft_putunsigned(n / 10, table);
		table->count += 1;
	}
	ft_putchar_fd((n % 10) + '0', 1);
}

void	ft_d_i(t_print *table)
{
	unsigned int	i;
	int				n;

	n = va_arg(table->args, int);
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		table->count += 1;
		i = -n;
	}
	else
	{
		i = n;
	}
	ft_putunsigned(i, table);
	table->count += 1;
}

void	ft_u(t_print *table)
{
	unsigned int	n;

	n = va_arg(table->args, unsigned int);
	ft_putunsigned(n, table);
	table->count += 1;
}
