# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 13:48:42 by tbertozz          #+#    #+#              #
#    Updated: 2021/11/02 12:14:59 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	srcs/ft_printf.c\
					srcs/ft_c.c\
					srcs/ft_d_i_u.c\
					srcs/ft_hexa.c\
					srcs/ft_s.c\
					srcs/ft_checker.c\


OBJS			=	$(SRCS:.c=.o)

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a

.PHONY:		all clean fclean re

%.o: %.c
	$(CC) -c $(CFLAGS) -I includes $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(MAKE) bonus -C ./libft
			cp libft/libft.a $(NAME)
			ar -rcs $(NAME) $(OBJS)

clean:
			$(MAKE) clean -C ./libft
			rm -f $(OBJS)

fclean:
			$(MAKE) fclean -C ./libft
			rm -f $(NAME) $(OBJS)

re:			fclean all
