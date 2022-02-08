/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:02:22 by tbertozz          #+#    #+#             */
/*   Updated: 2021/09/08 12:28:23 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* gets the last occurance of c, converted to char, in the string (s).
** terminating character is included as part of string
** if c is \0, function finds it
** returns pointer to located char or NULL if
** char not in the string
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
