# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 10:23:57 by tbertozz          #+#    #+#              #
#    Updated: 2022/10/06 10:56:57 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = farm

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -I .

FLAGS_PLUS = -std=c++98

SRCS = Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re