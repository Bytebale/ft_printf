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

-------------------------------------------------------------------------
	#include <unistd.h>
#include <stdarg.h>
typedef struct s_print
{
	va_list	args;
	int		c;
	int		s;
	int		p;
	int		d;
	int		i;
	int		u;
	int		x;
	int		X;
	int		perc;
}	t_print;

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

t_print	*ft_init_tab(t_print *tab)
{
	tab->c = 0;
	tab->s = 0;
	tab->p = 0;
	tab->d = 0;
	tab->i = 0;
	tab->u = 0;
	tab->x = 0;
	tab->X = 0;
	tab->perc = 0;
	return (tab);
}
//
//
//{
//
//int	ft_format(t_print *tab, const char *format, int i)
//{
//	c = va_arg(args, int);
//	s = va_arg(args, char *);
//	d = va_arg(args, int);
//	i = va_arg(args, int);
//	u = va_arg(args, unsigned int);
//	p = va_arg(args, unsigned long);
//	x = va_arg(args, unsigned int);
//	X = va_arg(args, unsigned int);
//}
#include <stdlib.h>

//#inclue <stdarg.h>

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
		if (format[i] == '%') {
			i++;
			if (format[i] == 'c')
				write(1, "1", 1);
		}//i = ft_format(tab, format, i + 1);
		else
			ret += ft_putchar(format[i]);
	}
	va_end(tab->args);
	ret += tab->c;
	free (tab);
	return (ret);
}
int main()
{
	ft_printf("%d", 'd');
