/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:06 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:33:09 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*sub;

	index = 0;
	if (s == 0)
		return (0);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	while (index < len)
	{
		sub[index] = s[start + index];
		index++;
	}
	sub[index] = '\0';
	return (sub);
}
