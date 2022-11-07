# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 11:44:03 by tbertozz          #+#    #+#              #
#    Updated: 2022/09/15 14:23:41 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = farm

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -I .

FLAGS_PLUS = -std=c++98

SRCS = Animal.cpp brain.cpp cat.cpp dog.cpp wrongAnimal.cpp wrongCat.cpp main.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re