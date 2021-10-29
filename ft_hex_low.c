/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:40:15 by gribovvladi       #+#    #+#             */
/*   Updated: 2021/10/29 22:07:05 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
