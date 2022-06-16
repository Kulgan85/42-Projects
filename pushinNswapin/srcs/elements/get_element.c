/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:37:38 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 13:05:06 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*get_element(t_stack *lst, int index)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (i == index)
			return (lst);
		lst = lst->next;
		i++;
	}
	return (NULL);
}

t_stack	*get_last_element(t_stack *lst)
{
	return (get_element(lst, stack_size(lst) - 1));
}
