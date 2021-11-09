# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 21:28:10 by lshonta           #+#    #+#              #
#    Updated: 2021/11/09 15:03:01 by lshonta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
	ft_functions1.c\
	ft_functions2.c \

LIBSRC = ./libft/*.c\
		./libft/*.h\

LIBFT_PATH = ./libft/

MAKE = make

all: libft_make $(NAME)


$(NAME): $(SRC) *.h
	$(CC) $(FLAGS) -c $(SRC) 
	ar -rcs $(NAME) *.o $(LIBFT_PATH)*.o $?

libft_make:
	@$(MAKE) libft.a -C $(LIBFT_PATH)

clean:
	rm -f *.out
	rm -f *.o
	@$(MAKE) clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re libft_make
