/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:41:31 by gribovvladi       #+#    #+#             */
/*   Updated: 2021/10/29 22:07:56 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_arg(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_intlen(ft_putnbr(va_arg(ap, int))));
	else if (c == 'u')
		return (ft_uint(va_arg(ap, unsigned int)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_hexlen(ft_point(va_arg(ap, unsigned long int)) + 2));
	}
	else if (c == 'x')
		return (ft_hexlen(ft_hex_low(va_arg(ap, unsigned int))));
	else if (c == 'X')
		return (ft_hexlen(ft_hex_up(va_arg(ap, unsigned int))));
	else if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}
