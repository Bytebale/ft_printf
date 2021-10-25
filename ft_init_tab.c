/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:33:13 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/25 12:04:10 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tlen = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->percent = 0;
	tab->space = 0;
	return (tab);
}
