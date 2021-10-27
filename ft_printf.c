/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:11:50 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/27 22:57:12 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_intlen(int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	if (num != 0)
	{
		while (num != 0)
		{
			num /= 10;
			i++;
		}
	}
	else
		i++;
	printf("\nlen->%d\n", i);
	return (i);
}

int	ft_hexlen(unsigned long int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	if (num != 0)
	{
		while (num)
		{
			printf("\nlen->%d, num ->%d\n", i, num);
			num /= 16;
			i++;
		}
	}
	else
		i++;
	printf("\nlen->%d\n", i);
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!(s[i]))
		return (0);
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int	nb)
{
	int copy;

	copy = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48);
	return (copy);
}

int	ft_uint(unsigned int nb)
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
	return (0);
}

int	ft_point(unsigned	long	int nbr)
{
	int	len;

	len = nbr;
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
	return (len);
}

int	ft_hex_low(unsigned long int nbr)
{
	int	len;

	len = nbr;
	if (nbr > 15)
	{
		ft_hex_low(nbr / 16);
		ft_hex_low(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
		{
			ft_putchar(nbr + '0');
		}
		else
		{
			ft_putchar(nbr - 10 + 'a');
		}
	}
	return (len);
}

int	ft_hex_up(unsigned long int nbr)
{
	int	len;

	len = nbr;
	if (nbr > 15)
	{
		ft_hex_up(nbr / 16);
		ft_hex_up(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
		{
			ft_putchar(nbr + '0');
		}
		else
		{
			ft_putchar(nbr - 10 + 'A');
		}
	}
	return (len);
}

int	ft_print_arg(char c, va_list ap)
{
	int len = 0;
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

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			len = ft_print_arg(*(++format), ap);
		else
			ft_putchar(*format);
		format++;
		len++;
	}
	va_end(ap);
	return (len);
}

int main()
{
	int x = 3648;
	ft_printf("%p\n", &x);
	printf("%p\n", &x);
	return (0);
}