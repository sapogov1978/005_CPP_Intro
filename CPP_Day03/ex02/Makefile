# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brattles <brattles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 17:44:42 by brattles          #+#    #+#              #
#    Updated: 2022/01/23 12:30:15 by brattles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= repetitive

CC			:= c++
WFLAGS		:= -Wall -Wextra -Werror -MMD

OBJ_DIR		:= ./build

FUNCTIONS	=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FlagTrap.cpp

OBJ			:= $(FUNCTIONS:%.cpp=$(OBJ_DIR)/%.o)
DEP			:= $(OBJ:%.o=%.d)
CPPFLAGS	:= $(WFLAGS) -std=c++98 -g

vpath %.cpp src

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

-include $(DEP)
$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all