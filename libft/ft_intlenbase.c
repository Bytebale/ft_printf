/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlenbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:29:03 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:29:03 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_intlenbase(unsigned long nbr, int base)
{
	int	counter;

	if (nbr == 0)
		return (1);
	counter = 0;
	while (nbr != 0)
	{
		nbr = nbr / base;
		counter++;
	}
	return (counter);
}
