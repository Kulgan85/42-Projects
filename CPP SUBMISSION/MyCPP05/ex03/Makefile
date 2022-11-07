# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 13:11:50 by tbertozz          #+#    #+#              #
#    Updated: 2022/10/10 14:53:00 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = The_Office

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -I .

FLAGS_PLUS = -std=c++98

SRCS = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re