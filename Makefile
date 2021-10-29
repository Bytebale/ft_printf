# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 21:07:44 by gribovvladi       #+#    #+#              #
#    Updated: 2021/10/29 22:05:26 by gribovvladi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -c

SRCS=./*.c

OBJECTS=*.o
LIB_PATH = ./
INCLUDES=./includes

all:$(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS)
	@ar -rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

bonus: re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) $<

re: fclean all

.PHONY:	all clean fclean re