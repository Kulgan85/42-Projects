/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:52:18 by tbertozz          #+#    #+#             */
/*   Updated: 2021/09/16 12:02:33 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* makes the number an absolute value*/
void	ft_makeabs(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = (*n * -1);
		*sign = -1;
	}
	else
	{
		*sign = 1;
	}
}

/*checks for edgecases and returns the proper output when that occurs*/
static	int	edgecase(int n, void *str)
{
	char	*pstr;
	int		x;
	char	*fstr;

	pstr = (char *)str;
	if (n == -2147483648)
	{
		x = 0;
		fstr = "-2147483648";
		while (x <= 12)
		{
			pstr[x] = fstr[x];
			x++;
		}
		return (1);
	}
	else if (n == 0)
	{
		pstr[0] = '0';
		pstr[1] = '\0';
		return (1);
	}
	return (0);
}

/*determines the length of the integer*/
int	ft_intlen(int n)
{
	int	i;
	int	sign;

	sign = -1;
	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		n = n * -1;
		sign = 1;
	}
	while (n < 0)
	{
		n = n / 10;
		i++;
	}
	if (sign == -1)
		return (i + 1);
	else
		return (i);
}

/*Takes a string and the length of that string, and  reverses
** the string in place. Returns the reversed string.*/
char	*ft_strrev(char *str, int len)
{
	char	*pfront;
	char	*pback;
	char	swap;

	pfront = str;
	pback = str + (len - 1);
	while (pfront < pback)
	{
		swap = *pfront;
		*pfront = *pback;
		*pback = swap;
		pfront++;
		pback--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		i;

	str = malloc(sizeof(*str) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	if (edgecase(n, str) == 1)
		return (str);
	ft_makeabs(&n, &sign);
	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (sign == -1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (ft_strrev(str, ft_strlen(str)));
}
