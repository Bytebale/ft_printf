/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:40:49 by gribovvladi       #+#    #+#             */
/*   Updated: 2021/10/30 07:00:31 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

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
