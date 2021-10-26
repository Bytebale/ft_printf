/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:11:50 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/26 19:25:15 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_putstr(char *s)
{
	if (!(*s))
		return ;
	while (*s)
		ft_putchar(*s++);
}

void	ft_print_arg(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			ft_print_arg(*(++format), ap);
		else
			ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (0);
}

#include <stdio.h>
int main()
{
	ft_printf("%s\n", "hello");
	printf("%s\n", "hello");
	return (0);
}