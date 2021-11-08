/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:19 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:33:19 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	while (index >= 0)
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
