/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:30:10 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/16 10:05:40 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_data(t_stack *lst)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		count;

	tmp = lst;
	while (tmp)
	{
		count = 0;
		tmp1 = tmp;
		while (tmp1)
		{
			if (tmp1->value == tmp->value)
			{
				count++;
				if (count >= 2)
					exit_error();
			}
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}

int	special_strlen(char **a)
{
	int	l;

	if (!a)
		return (0);
	l = 0;
	while (l[a])
		l++;
	return (l);
}

int	contains_space(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	create_new_element(char *a, t_stack **lst)
{
	char	*tmp;
	char	*max;
	int		len;

	if (!a || !a[0])
		exit_error();
	max = "2147483647";
	tmp = a;
	if (a[0] == '-' && tmp++)
		max = "2147483648";
	while (tmp[0] == '0')
		tmp++;
	len = ft_strlen(tmp);
	if (len > 10 || (len == 10 && ft_strncmp(tmp, max, 11) > 0))
		exit_error();
	while (tmp[0])
	{
		if (!ft_isdigit(tmp[0]))
			exit_error();
		tmp++;
	}
	*lst = new_element(ft_atoi(a), *lst);
}

/*void	parse(t_stack **lst, char **args, int argc)
{
	int		index;
	int		i;
	char	**strs;

	index = argc - 1;
	while (index > 0)
	{
		if (contains_space(args[index]))
		{
			strs = ft_split(args[index], ' ');
			i = special_strlen(strs) - 1;
			while (i >= 0)
			{
				create_new_element(strs[i], lst);
				free(strs[i]);
				i--;
			}
			free(strs);
		}
		else
			create_new_element(args[index], lst);
		index--;
	}
	check_data(*lst);
}*/

void	parse(t_stack **lst, char **args, int argc)
{
	int	index;

	index = argc - 2;
	if (argc == 2)
	{
		args = ft_split(args[0], ' ');
		while (args[index + 1])
			index++;
	}
	while (index >= 0)
	{
		create_new_element(args[index], lst);
		if (argc == 2)
			free(args[index]);
		index--;
	}
	if (argc == 2)
		free(args);
	check_data(*lst);
}
