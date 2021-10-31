/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 20:36:19 by gribovvladi       #+#    #+#             */
/*   Updated: 2021/10/30 07:00:26 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf.h"

int	ft_hexlen(unsigned long int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	if (num != 0)
	{
		while (num)
		{
			num /= 16;
			i++;
		}
	}
	else
		i++;
	return (i);
}

			// printf("\nlen->%d, num ->%d\n", i, num);
			// 	printf("\nlen->%d\n", i);