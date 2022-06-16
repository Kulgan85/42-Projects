/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:09:19 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:53:31 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort3(t_stack **stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*stack_a)->value;
	mid = (*stack_a)->next->value;
	bot = (*stack_a)->next->next->value;
	if (top > mid && bot > mid && top < bot)
		swap(stack_a, 'a');
	else if (top > mid && mid > bot && top > bot)
	{
		swap(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
	}
	else if (top > mid && bot > mid && top > bot)
		rotate(stack_a, 'a');
	else if (top < mid && mid > bot && top < bot)
	{
		swap(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if (top < mid && mid > bot && top > bot)
		reverse_rotate(stack_a, 'a');
}

static void	move_optimise(t_stack **a, int i)
{
	int			lowest;
	t_stack		*temp;
	int			index;

	temp = (*a);
	index = 0;
	lowest = get_lowest(*a)->value;
	while (temp)
	{
		if (temp->value == lowest)
			break ;
		index++;
		temp = temp->next;
	}
	get_lowest_top(a, index, i);
}

void	sort_5(t_stack **a, t_stack **b)
{
	pre_sort(a);
	if (stack_size(*a) == 5)
	{
		move_optimise(a, 0);
		push(a, b, 'b');
		move_optimise(a, 1);
		push(a, b, 'b');
		sort3(a);
		push(b, a, 'a');
		push(b, a, 'a');
		if (!is_sorted(*a))
			rotate(a, 'a');
	}
	else
	{
		move_optimise(a, 0);
		push(a, b, 'b');
		sort3(a);
		push(b, a, 'a');
	}
}

void	sort_bigger(t_stack **stack_a, t_stack **stack_b)
{
	size_t	length;
	size_t	i;
	size_t	j;
	int		k;

	length = stack_size(*stack_a);
	i = 0;
	pre_sort(stack_a);
	while (!is_sorted(*stack_a))
	{
		j = 0;
		while (j < length)
		{
			k = (*stack_a)->value >> i;
			if ((k & 1) == 1)
				rotate(stack_a, 'a');
			else
				push(stack_a, stack_b, 'b');
			j++;
		}
		while ((*stack_b))
			push(stack_b, stack_a, 'a');
		i++;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	size_t	length;

	length = stack_size(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if (length == 2)
		swap(stack_a, 'a');
	else if (length == 3)
		sort3(stack_a);
	else if (length <= 5)
		sort_5(stack_a, stack_b);
	else
		sort_bigger(stack_a, stack_b);
}
