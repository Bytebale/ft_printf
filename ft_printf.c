/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:11:50 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/26 23:54:40 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	if (!(*s))
		return ;
	while (*s)
		ft_putchar(*s++);
}

void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
}

void	ft_uint(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
		nb = -nb;
	nbr = (unsigned int) nb;
	if (nb >= 10)
	{
		ft_uint(nbr / 10);
	}
	ft_putchar((nbr % 10) + 48);
}

void	ft_point(unsigned	long	long nbr)
{
	if (nbr > 15)
	{
		ft_point(nbr / 16);
		ft_point(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			ft_putchar(nbr - 10 + 'a');
	}
}

void	ft_print_arg(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		ft_uint(va_arg(ap, long long int));
	else if (c == 'p')
		ft_point(va_arg(ap, unsigned long long));
	// else if (c == 'x')
	// 	ft_hex_low(va_arg(ap, unsigned int), "0123456789abcdef")
	// else if (c == 'X')
	// 	ft_hex_up(va_arg(ap, unsigned int), "0123456789ABCDEF")
	// else if (c == '%')
	// 	ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			ft_print_arg(*(++format), ap);
		else
			ft_putchar(*format);
		format++;
	}
	i = ft_strlen(va_arg(ap, char *));
	va_end(ap);
	return (i);
}

#include <stdio.h>
int main()
{
	ft_printf("%p\n", (void *) -214);
	printf("%p\n", (void *) -214);
	return (0);
}
