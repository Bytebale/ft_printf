/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:12:44 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/25 12:04:06 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tlen;
	int		sign;
	int		is_zero;
	int		percent;
	int		space;
}	t_print;

int		ft_printf(const char *format, ...);
t_print	*ft_init_tab(t_print *tab);

#endif