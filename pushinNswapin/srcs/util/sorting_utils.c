/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:51:30 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:46:42 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	nice_sort5(t_stack **stack_a, t_stack **stack_b)
{
	if ((get_top(*stack_b) > get_top(*stack_a))
		&& get_top(*stack_b) < get_bottom(*stack_a))
	{
		while (get_top(*stack_b) > get_top(*stack_a))
			rotate(stack_a, 'a');
		push(stack_b, stack_a, 'a');
	}
	if ((get_top(*stack_b) < get_top(*stack_a))
		&& get_top(*stack_b) < get_bottom(*stack_a))
	{
		while (!is_sorted(*stack_a))
			rotate(stack_a, 'a');
		push(stack_b, stack_a, 'a');
	}
	if ((get_top(*stack_b) < get_top(*stack_a))
		&& get_top(*stack_b) > get_bottom(*stack_a))
	{
		push(stack_b, stack_a, 'a');
		while (!is_sorted(*stack_a))
			rotate(stack_a, 'a');
	}
	if (get_top(*stack_a) > get_element(*stack_a, 1)->value)
		swap(stack_a, 'a');
}

int	get_next_index(t_stack **stack, int previous)
{
	t_stack	*temp;
	int		current;

	temp = *stack;
	current = -200000000;
	while (temp)
	{
		if (temp->value > previous
			&& ((current == -200000000 && temp->value != -200000000)
				|| temp->value < current))
			current = temp->value;
		temp = temp->next;
	}
	return (current);
}

void	give_index(t_stack *temp, t_stack **stack)
{
	int	i;
	int	current;
	int	previous;

	i = 1;
	while (temp)
	{
		if (!get_by_index(*stack, i - 1))
		{
			temp = temp->next;
			continue ;
		}
		previous = get_by_index(*stack, i - 1)->value;
		current = get_next_index(stack, previous);
		if (!get_by_value(*stack, current))
		{
			temp = temp->next;
			continue ;
		}
		get_by_value(*stack, current)->index = i;
		temp = temp->next;
		i++;
	}
}
