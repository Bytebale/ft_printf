/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:35:05 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:35:06 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			index;

	index = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((dst == 0) && (src == 0))
		return (0);
	while (index < n)
	{
		cdest[index] = csrc[index];
		index++;
	}
	return (cdest);
}
