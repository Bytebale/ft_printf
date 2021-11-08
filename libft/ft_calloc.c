/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:07:58 by jzhou             #+#    #+#             */
/*   Updated: 2021/11/08 21:28:48 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*result;
	size_t	index;

	result = malloc(nitems * size);
	if (result == 0)
		return (0);
	index = 0;
	while (index < (nitems * size))
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}
