# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 10:08:10 by tbertozz          #+#    #+#              #
#    Updated: 2022/06/02 15:48:31 by tbertozz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name
NAME =			philo

#Compiler
CC = 			gcc
CFLAGS = 		-Wall -Wextra -Werror
LIBRARIES =		-lpthread
CFLAG = 		-c
OFLAG =			-o
IFLAG =			-I

#Make
MAKE = 			make -s -C
MAKE_CLEAN = 	make clean -s -C
MAKE_FCLEAN = 	make fclean -s -C

#Unzip
UNZIP =			unzip -X -o -q

#Norm
NORM =			norminette

#Shell
MKDIR =			mkdir -p
CP =			cp
RM =			rm -rf

#Directories
SOURCES_DIR =	./srcs
OBJECTS_DIR =	./objs
HEADERS_DIR =	./includes

#Files
FILES =			error.c \
				main.c \
				philosopher.c \
				schedule.c \
				utils.c
				

#Srcs
SRCS =			$(foreach FILE, $(FILES), $(shell find $(SOURCES_DIR) -name $(FILE)))

#Objs
OBJS =			$(patsubst $(SOURCES_DIR)/%, $(OBJECTS_DIR)/%, $(SRCS:.c=.o))

$(OBJECTS_DIR)/%.o: $(SOURCES_DIR)/%.c
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(IFLAG) $(HEADERS_DIR) $(CFLAG) $(OFLAG) $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBRARIES) $(OFLAG) $(NAME)
	@echo "Done!"

norminette:
	@$(NORM) $(shell find $(SOURCES_DIR) -name *.c)
	@$(NORM) $(shell find $(HEADERS_DIR) -name *.h)

clean:
	@$(RM) $(OBJECTS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all norminette clean fclean re