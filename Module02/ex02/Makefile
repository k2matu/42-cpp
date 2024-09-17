# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 21:05:39 by kmatjuhi          #+#    #+#              #
#    Updated: 2024/09/17 11:21:45 by kmatjuhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
# COMPILATION
################################################################################
CC		:=	g++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++17 -pedantic

################################################################################
# GENERAL
################################################################################
NAME	:=	overload
HEADER	:=	-Iincludes
SRC_DIR	:=	src
OBJ_DIR	:=	obj
RM		:=	rm -f

SRCS	:=	main.cpp \
			Fixed.cpp

OBJS	:= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

################################################################################
# RULES
################################################################################
all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(HEADER) $(OBJS) -o $(NAME)
	@echo "Linking complete: $(NAME)"

vpath %.cpp $(SRC_DIR)
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
	@echo "Cleaned object files"
	$(RM) -rf $(OBJ_DIR)

fclean: clean
	@echo "Cleaned object files and executable"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
