/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_functions1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:36:58 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/09 14:33:31 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		len = len + 6;
		return (len);
	}
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

int	ft_putpointer(void *ptr)
{
	unsigned long	address;
	unsigned long	res;
	int				len;

	if (ptr == NULL)
		return (write(1, "0x0", 3));
	address = (unsigned long) ptr;
	len = 0;
	write(1, "0x", 2);
	len = len + 2;
	res = ft_puthex(address);
	len = len + res;
	return (len);
}

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	ft_putnbr_fd(nbr, 1);
	if (nbr < 0)
		len++;
	len = len + ft_intlen(nbr);
	return (len);
}
