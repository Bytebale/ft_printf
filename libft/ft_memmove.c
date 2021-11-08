/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:35:00 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:35:01 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	if ((cdest == 0) && (csrc == 0))
		return (0);
	if (csrc < cdest)
	{
		while (len > 0)
		{
			cdest[len - 1] = csrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(cdest, csrc, len);
	return (dst);
}
