/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:05:22 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 13:00:07 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_silently(t_stack **nums)
{
	t_stack		*front;
	t_stack		*back;
	t_stack		*head;

	head = *nums;
	back = *nums;
	front = *nums;
	if (*nums == NULL)
		return ;
	while (front->next != NULL)
	{
		front = front->next;
		if (front->next != NULL)
			back = back->next;
	}
	if (front->next == NULL)
	{
		front->next = head;
		back->next = NULL;
	}
	*nums = front;
}

void	reverse_rotate(t_stack **stack, char stack_name)
{
	reverse_rotate_silently(stack);
	ft_putstr_fd("rr", 1);
	ft_putchar_fd(stack_name, 1);
	ft_putchar_fd('\n', 1);
}

void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_silently(stack_a);
	reverse_rotate_silently(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
