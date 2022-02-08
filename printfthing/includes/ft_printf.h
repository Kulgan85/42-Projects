/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:44:35 by tbertozz          #+#    #+#             */
/*   Updated: 2021/11/02 11:49:51 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdlib.h"
# include "libft.h"

typedef struct s_print
{
	va_list	args;
	int		count;
}			t_print;

int		ft_printf(const char *str, ...);
void	ft_checker(t_print *table, const char *str);
void	ft_c(t_print *table);
void	ft_s(t_print *table);
void	ft_p(t_print *table);
void	ft_d_i(t_print *table);
void	ft_u(t_print *table);
void	ft_hexa(t_print *table, char c);

#endif
