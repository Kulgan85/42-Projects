/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:04:40 by tbertozz          #+#    #+#             */
/*   Updated: 2021/11/10 10:33:12 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_ptrstr(unsigned long n, int *k)
{
	char	*str;

	while (n > 15)
	{
		n = n / 16;
		*k += 1;
	}
	str = (char *)malloc(sizeof(char) * (*k + 1));
	if (str == NULL)
		return (NULL);
	str[*k] = '\0';
	return (str);
}

void	ft_hexa(t_print *table, char c)
{
	unsigned int	n;
	int				k;
	char			*str;

	n = va_arg(table->args, unsigned int);
	k = 1;
	str = ft_ptrstr(n, &k);
	k--;
	while (k >= 0)
	{
		if (n % 16 < 10)
			str[k] = '0' + (n % 16);
		else if (c == 'x')
			str[k] = 'a' + (n % 16) - 10;
		else
			str[k] = 'A' + (n % 16) - 10;
		n = n / 16;
		k--;
		table->count += 1;
	}
	ft_putstr_fd(str, 1);
	free(str);
}

void	ft_p(t_print *table)
{
	unsigned long	n;
	int				k;
	char			*str;

	n = va_arg(table->args, unsigned long);
	k = 1;
	str = ft_ptrstr(n, &k);
	ft_putstr_fd("0x", 1);
	table->count += 2;
	k--;
	while (k >= 0)
	{
		if (n % 16 < 10)
			str[k] = '0' + (n % 16);
		else
			str[k] = 'a' + (n % 16) - 10;
		n = n / 16;
		k--;
		table->count += 1;
	}
	ft_putstr_fd(str, 1);
	free(str);
}
