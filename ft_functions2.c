/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:37:07 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/09 14:56:47 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunint(unsigned int nbr)
{
	int		len;
	char	*result;

	len = 0;
	result = ft_baseitoa(nbr, 10);
	ft_putstr(result);
	len = ft_strlen(result);
	free (result);
	return (len);
}

int	ft_puthex(unsigned long nbr)
{
	int		len;
	char	*result;

	len = 0;
	result = ft_baseitoa(nbr, 16);
	ft_putstr(result);
	len = ft_strlen(result);
	free (result);
	return (len);
}

int	ft_puthex_up(unsigned long nbr)
{
	int		len;
	char	*result;

	len = 0;
	result = ft_baseitoa_up(nbr, 16);
	ft_putstr(result);
	len = ft_strlen(result);
	free (result);
	return (len);
}
