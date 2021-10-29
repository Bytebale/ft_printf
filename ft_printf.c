/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:11:50 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/29 22:08:57 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

// int main()
// {
// 	char x[] = "3648";
// 	ft_printf("%s\n", x);
// 	printf("%s\n", x);
// 	return (0);
// }