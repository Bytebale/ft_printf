/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:34:55 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:34:56 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	sc;
	size_t			index;

	str1 = (unsigned char *)str;
	sc = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		str1[index] = sc;
		index++;
	}
	return (str1);
}
