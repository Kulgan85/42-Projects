/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:16:41 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/16 10:05:46 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

long	ft_atol(const char *str)
{
	int			index;
	int			neg;
	long		res;

	index = 0;
	res = 0;
	neg = 1;
	while (str[index] == '\n' || str[index] == '\t' || str[index] == '\r'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			neg = -1;
		index++;
	}	
	while (str[index] != '\0' && ft_isdigit(str[index]))
	{
		res = (res * 10) + str[index] - '0';
		index++;
	}
	if (neg == -1)
		return (-res);
	return (res);
}

int	check_valid_int(int argc, char **argv)
{
	int		argcount;
	int		argvindex;

	argcount = 1;
	argvindex = 0;
	while (argcount < argc)
	{
		while (argv[argcount][argvindex] != '\0')
		{
			if (argv[argcount][argvindex] == '-' && argvindex == 0)
				argvindex++;
			argvindex++;
		}
		if ((ft_atol(argv[argcount])) >= MAX
			|| (ft_atol(argv[argcount])) <= MIN)
			exit_error();
		argvindex = 0;
		argcount++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	stack_b = NULL;
	parse(&stack_a, &argv[1], argc);
	print_stacks(stack_a, stack_b);
	check_valid_int(argc, argv);
	sort(&stack_a, &stack_b);
	print_stacks(stack_a, stack_b);
	clear_elements(&stack_a, &stack_b);
	return (0);
}
