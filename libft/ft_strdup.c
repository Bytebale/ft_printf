/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:34:17 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:34:17 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	int		length;
	char	*target;

	index = 0;
	length = ft_strlen(s);
	target = (char *)malloc((length + 1) * sizeof(char));
	if (target == 0)
		return (0);
	while (index < length)
	{
		target[index] = s[index];
		index++;
	}
	target[index] = '\0';
	return (target);
}
