# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brattles <brattles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 17:08:52 by brattles          #+#    #+#              #
#    Updated: 2022/01/27 23:22:32 by brattles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= form

CC			:= c++
WFLAGS		:= -Wall -Wextra -Werror -MMD

OBJ_DIR		:= ./build

FUNCTIONS	=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp

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