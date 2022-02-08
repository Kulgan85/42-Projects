/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:02:04 by tbertozz          #+#    #+#             */
/*   Updated: 2021/09/27 12:11:57 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)stack);
	i = 0;
	while (stack[i] && i < len)
	{
		j = 0;
		while (stack[i + j] && needle[j] && i + j
			< len && stack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(stack + i));
		i++;
	}
	return (NULL);
}
