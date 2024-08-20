# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 21:05:39 by kmatjuhi          #+#    #+#              #
#    Updated: 2024/08/20 14:32:14 by kmatjuhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Violence
CC		:= g++
RM		:= rm -f
CFLAGS	:= -Wall -Wextra -Werror -std=c++11 -pedantic
SRCS	:= 	./src/main.cpp \
			./src/Weapon.cpp \
			./src/HumanA.cpp \
			./src/HumanB.cpp

OBJS	:= ${SRCS:.cpp=.o}

all:	$(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
		
fclean: clean
	$(RM) $(NAME)
		
re:	clean all

.PHONY: all clean fclean re
