/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:37:26 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/13 18:32:30 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_init(char c, va_list args)
{
	int	count;

	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'p')
		count = ft_putpointer(va_arg(args, void *));
	if (c == 'd')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count = ft_putunint(va_arg(args, unsigned int));
	if (c == 'x')
		count = ft_puthex(va_arg(args, unsigned int));
	if (c == 'X')
		count = ft_puthex_up(va_arg(args, unsigned int));
	if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		result;
	int		count;
	va_list	args;

	va_start(args, format);
	len = 0;
	result = 0;
	while (format[len] != '\0')
	{
		if (format[len] != '%')
		{
			write(1, &format[len++], 1);
			result++;
		}
		else
		{
			len++;
			count = ft_init(format[len++], args);
			result = result + count;
		}
	}
	va_end(args);
	return (result);
}
