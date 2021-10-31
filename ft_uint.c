/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:38:19 by gribovvladi       #+#    #+#             */
/*   Updated: 2021/10/30 06:58:50 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int	ft_uint(unsigned int nb)
{
	unsigned int	nbr;

	if (nb < 0)
		nb = -nb;
	nbr = (unsigned int) nb;
	if (nb >= 10)
	{
		ft_uint(nbr / 10);
	}
	ft_putchar((nbr % 10) + 48);
	return (0);
}
