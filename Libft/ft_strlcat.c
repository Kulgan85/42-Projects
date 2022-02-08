/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:56:44 by tbertozz          #+#    #+#             */
/*   Updated: 2021/09/07 10:57:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int size)
{
	int	i;
	int	j;
	int	destlength;
	int	srclength;

	i = 0;
	destlength = ft_strlen (dst);
	srclength = ft_strlen (src);
	j = destlength;
	if (destlength < size - 1 && size > 0)
	{
		while (src[i] && destlength + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (destlength >= size)
	{
		destlength = size;
	}
	return (destlength + srclength);
}
