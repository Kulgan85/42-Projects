# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 14:18:22 by tbertozz          #+#    #+#              #
#    Updated: 2022/04/28 11:56:01 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

MAIN = srcs/pipex.c

FILES =	srcs/error.c \
		srcs/path_access.c \
		srcs/main_process.c \
		srcs/path_find.c \
		srcs/sub_process.c \

OBJS = $(FILES:.c=.o)

.c.o:
	@$(CC) -c $(FLAGS) -I includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) re -C ./libft
		@cp libft/libft.a ./$(NAME).a
		@ar rcs $(NAME).a $(OBJS)
		@$(CC) $(FLAGS) $(NAME).a $(MAIN) -o $(NAME) -I includes/
		@echo "pipex created"

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)
		@echo "cleaned pipex obj files"

fclean:	clean
		@$(RM) $(NAME)
		@$(RM) $(NAME).a
		@$(MAKE) fclean -C ./libft
		@echo "cleaned pipex file"

re: fclean all

.PHONY: clean fclean all re
