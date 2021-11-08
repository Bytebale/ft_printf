/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:37:36 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:37:37 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr(int nbr);
int	ft_putuint(unsigned int nbr);
int	ft_puthex(unsigned long nbr);
int	ft_puthex_cap(unsigned long nbr);

#endif
