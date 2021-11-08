/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:35:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:35:31 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			index;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (s1[index] == c1)
			return (&s1[index]);
		index++;
	}
	return (0);
}
