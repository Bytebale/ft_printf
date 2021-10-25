/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:11:50 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/25 12:04:09 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_format(tab, format, i + 1);
		else
			ret += ft_putchar(format[i]);
	}
	va_end(tab->args);
	ret += tab->tlen;
	free (tab);
	return (ret);
}
