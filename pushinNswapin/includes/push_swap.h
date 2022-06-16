/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:19:24 by tbertozz          #+#    #+#             */
/*   Updated: 2022/05/13 15:45:54 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"
# include "stdio.h"
# include "unistd.h"
# include "fcntl.h"
# include "../gnl/get_next_line.h"
# include "../libft/libft.h"

# define DEBUG 0
# define MAX 2147483647
# define MIN -2147483648

//Structs//
typedef struct s_stack {
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_chunk {
	int	min;
	int	max;
}		t_chunk;

typedef struct s_hold {
	int	first_hold;
	int	second_hold;
}		t_hold;

//Main ops//
void		swap(t_stack **stack, char stack_name);
void		swap_both(t_stack **stack_a, t_stack **stack_b);
void		push_silently(t_stack **source, t_stack **target);
void		push(t_stack **source, t_stack **target, char name);
void		rotate(t_stack **stack, char stack_name);
void		rotate_both(t_stack **stack_a, t_stack **stack_b);
void		reverse_rotate(t_stack **stack, char stack_name);
void		reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);
void		swap_silently(t_stack **stack);
void		rotate_silently(t_stack **stack);
void		reverse_rotate_silently(t_stack **nums);

int			check_valid_int(int argc, char **argv);
long		ft_atol(const char *str);
size_t		stack_size(t_stack *lst);
t_stack		*get_element(t_stack *lst, int index);
t_stack		*new_element(int value, t_stack *next);
void		clear_elements(t_stack **stack_a, t_stack **stack_b);
void		element_iter(t_list *lst, void (*f)(int));
t_stack		*get_last_element(t_stack *lst);
int			get_top(t_stack *stack);
int			get_bottom(t_stack *stack);
t_stack		*get_lowest(t_stack *stack);
int			get_bigger(t_stack *stack);
t_stack		*copy_stack(t_stack *stack);

void		parse(t_stack **lst, char **args, int argc);
int			is_in_chunk(int a, t_chunk chunk);
int			hold_to_top_moves_len(int hold_pos, int stack_size);

void		pre_sort(t_stack **stack);
void		nicest_sort5(t_stack **stack_a, t_stack **stack_b);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		rotate_or_reverse(t_stack **src, char stack_name);
void		get_lowest_top(t_stack **a, int index, int i);
int			get_next_index(t_stack **stack, int previous);
void		give_index(t_stack *tmp, t_stack **stack);
t_stack		*get_by_index(t_stack *stack, int index);
t_stack		*get_by_value(t_stack *stack, int value);

void		exit_error(void);
int			is_sorted(t_stack *stack);
void		print_stacks(t_stack *stack_a, t_stack *stack_b);
int			ft_strcmp(char *a, char *b);

void		printStacks(t_stack *a, t_stack *b);

#endif