# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 21:05:39 by kmatjuhi          #+#    #+#              #
#    Updated: 2024/11/10 22:28:28 by kmatjuhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
# COMPILATION
################################################################################
CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++17
################################################################################
# GENERAL
################################################################################
NAME	:=	intern
HEADER	:=	-Iincludes
SRC_DIR	:=	src
OBJ_DIR	:=	obj
RM		:=	rm -f

SRCS	:=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp

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
	$(RM) Bender_shrubbery

fclean: clean
	@echo "Cleaned object files and executable"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
