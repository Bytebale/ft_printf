/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:12:44 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/30 07:12:49 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "limits.h"

int	ft_printf(const char *format, ...);
int	ft_print_arg(char c, va_list ap);
int	ft_hex_up(unsigned long int nbr);
int	ft_hex_low(unsigned long int nbr);
int	ft_point(unsigned	long	int nbr);
int	ft_uint(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_hexlen(unsigned long int num);
int	ft_intlen(int num);
int	ft_putchar(int c);

#endif