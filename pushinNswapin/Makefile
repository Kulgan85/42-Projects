# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 14:18:22 by tbertozz          #+#    #+#              #
#    Updated: 2022/05/13 15:20:35 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

MAIN = main.c

FILES =	srcs/elements/clear_elements.c \
		srcs/elements/get_element.c \
		srcs/elements/new_element.c \
		srcs/elements/stack_size.c \
		srcs/operations/push.c \
		srcs/operations/rev_rotate.c \
		srcs/operations/rotate.c \
		srcs/operations/swap.c \
		srcs/parsing/parse_check.c \
		srcs/sorting/pre_sort.c \
		srcs/sorting/sort.c \
		srcs/util/sorting_utils.c \
		srcs/util/stack_utils.c \
		srcs/util/utils.c \

OBJS = $(FILES:.c=.o)

.c.o:
	@$(CC) -c $(FLAGS) -I includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) re -C ./libft
		@cp libft/libft.a ./$(NAME).a
		@ar rcs $(NAME).a $(OBJS)
		@$(CC) $(FLAGS) $(NAME).a $(MAIN) -o $(NAME) -I includes/
		@echo "push_swap created"

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)
		@echo "cleaned push_swap obj files"

fclean:	clean
		@$(RM) $(NAME)
		@$(RM) $(NAME).a
		@$(MAKE) fclean -C ./libft
		@echo "It's F***ing clean now"

re: fclean all

.PHONY: clean fclean all re
