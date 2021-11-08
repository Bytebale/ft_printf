/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:07:43 by jzhou             #+#    #+#             */
/*   Updated: 2021/11/08 21:28:41 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	index;

	str = (char *)s;
	index = 0;
	while (index < n)
	{
		str[index] = 0;
		index++;
	}
}
