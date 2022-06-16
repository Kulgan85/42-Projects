/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:52:03 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:56:38 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*get_by_index(t_stack *stack, int index)
{
	while (stack)
	{
		if (stack->index >= 0 && stack->index == index)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

t_stack	*get_by_value(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	initialise_indexes(t_stack *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

void	pre_sort(t_stack **stack)
{
	t_stack	*temp;

	initialise_indexes(*stack);
	get_lowest(*stack)->index = 0;
	temp = *stack;
	give_index(temp, stack);
	temp = *stack;
	while (temp)
	{
		temp->value = temp->index;
		temp = temp->next;
	}
}
