# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjuhi <kmatjuhi@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 21:05:39 by kmatjuhi          #+#    #+#              #
#    Updated: 2024/09/15 14:29:31 by kmatjuhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= sed
CC		:= g++
RM		:= rm -f
CFLAGS	:= -Wall -Wextra -Werror -pedantic
SRCS	:=	main.cpp \


OBJS	:= ${SRCS:.cpp=.o}

all:	$(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) test.txt.replace
		
fclean: clean
	$(RM) $(NAME)
		
re:	clean all

.PHONY: all clean fclean re
