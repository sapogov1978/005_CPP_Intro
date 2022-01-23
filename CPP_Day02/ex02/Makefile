# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brattles <brattles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 17:30:37 by brattles          #+#    #+#              #
#    Updated: 2022/01/21 17:30:55 by brattles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= talking

CC			:= c++
WFLAGS		:= -Wall -Wextra -Werror -MMD

OBJ_DIR		:= ./build

FUNCTIONS	=	main.cpp \
				Fixed.cpp

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