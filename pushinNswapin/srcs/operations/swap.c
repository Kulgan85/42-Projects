/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:58:52 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 12:59:15 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_silently(t_stack **stack)
{
	int	t;

	if (stack_size(*stack) < 2)
		return ;
	t = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = t;
}

void	swap(t_stack **stack, char stack_char)
{
	swap_silently(stack);
	ft_putchar_fd('s', 1);
	ft_putchar_fd(stack_char, 1);
	ft_putchar_fd('\n', 1);
}

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	swap_silently(stack_a);
	swap_silently(stack_b);
	ft_putstr_fd("ss\n", 1);
}
