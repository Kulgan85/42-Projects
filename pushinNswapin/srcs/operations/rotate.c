/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:22:57 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:59:56 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_silently(t_stack **stack)
{
	t_stack		*tmp;
	int			first;

	tmp = *stack;
	first = tmp->value;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next != NULL)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = first;
}

void	rotate(t_stack **stack, char stack_name)
{
	rotate_silently(stack);
	ft_putchar_fd('r', 1);
	ft_putchar_fd(stack_name, 1);
	ft_putchar_fd('\n', 1);
}

void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	rotate_silently(stack_a);
	rotate_silently(stack_b);
	ft_putstr_fd("rr\n", 1);
}
