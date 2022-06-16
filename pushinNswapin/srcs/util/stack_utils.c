/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:35:33 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:52:43 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_top(t_stack *stack)
{
	if (!stack)
		return (0);
	return (stack->value);
}

int	get_bottom(t_stack *stack)
{
	if (!stack)
		return (0);
	return (get_last_element(stack)->value);
}

int	get_bigger(t_stack *stack)
{
	int	bigger;

	bigger = 0;
	while (stack)
	{
		if (stack->value > bigger)
			bigger = stack->value;
		stack = stack->next;
	}
	return (bigger);
}

t_stack	*get_lowest(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (stack)
	{
		if (stack->value < temp->value)
			temp = stack;
		stack = stack->next;
	}
	return (temp);
}
