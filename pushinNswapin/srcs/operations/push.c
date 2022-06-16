/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:22:58 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 13:01:00 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_silently(t_stack **source, t_stack **target)
{
	t_stack	*temp;
	t_stack	*element;

	if (!*source)
		return ;
	element = (*source)->next;
	temp = *source;
	temp->next = *target;
	*target = temp;
	*source = element;
}

void	push(t_stack **source, t_stack **target, char name)
{
	push_silently(source, target);
	ft_putchar_fd('p', 1);
	ft_putchar_fd(name, 1);
	ft_putchar_fd('\n', 1);
	if (name == 'a')
		print_stacks(*target, *source);
	else
		print_stacks(*source, *target);
}
