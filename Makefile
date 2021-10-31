# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 21:07:44 by gribovvladi       #+#    #+#              #
#    Updated: 2021/10/30 06:56:42 by gribovvladi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a 
HEADER := *.h
FLAGS := -Wall -Werror -Wextra
LIST := ft_hex_low.c\
		ft_hex_up.c\
		ft_hexlen.c\
		ft_intlen.c\
		ft_point.c\
		ft_print_arg.c\
		ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_uint.c\

OBJ = $(patsubst %.c,%.o, $(LIST))

all: $(NAME)

$(NAME) : $(HEADER) $(OBJ)
	 ar -rc $(NAME)  $?

%.o : %.c
	gcc $(FLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus