# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brattles <brattles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 01:24:59 by brattles          #+#    #+#              #
#    Updated: 2022/01/05 22:20:04 by brattles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone

CC			:= c++
WFLAGS		:= -Wall -Wextra -Werror -MMD

OBJ_DIR		:= ./build

FUNCTIONS	=	megaphone.cpp

OBJ			:= $(FUNCTIONS:%.cpp=$(OBJ_DIR)/%.o)
DEP			:= $(OBJ:%.o=%.d)
CPPFLAGS	:= $(WFLAGS) -std=c++98

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
