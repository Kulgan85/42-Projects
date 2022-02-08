/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:35:32 by tbertozz          #+#    #+#             */
/*   Updated: 2021/11/10 10:33:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_print	*ft_table_init(void)
{
	t_print	*table;

	table = (t_print *)malloc(sizeof(t_print));
	if (table == NULL)
		return (NULL);
	table->count = 0;
	return (table);
}

int	ft_printf(const char *str, ...)
{
	t_print	*table;
	int		count;

	table = ft_table_init();
	if (table == NULL)
		return (-1);
	va_start(table->args, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			table->count += 1;
		}
		else if (*str == '%')
		{
			ft_checker(table, str);
			str++;
		}
		str++;
	}
	va_end(table->args);
	count = table->count;
	free(table);
	return (count);
}
