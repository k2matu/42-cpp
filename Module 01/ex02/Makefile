# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 21:05:39 by kmatjuhi          #+#    #+#              #
#    Updated: 2024/08/22 14:12:40 by kmatjuhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= brain
CC		:= g++
RM		:= rm -f
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRCS	:= 	main.cpp

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
