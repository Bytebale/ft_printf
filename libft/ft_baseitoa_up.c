/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baseitoa_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:29:55 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/09 15:14:37 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc(unsigned long n, int base)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / base;
		i ++;
	}
	return (i);
}

static char	*compare(unsigned long n, char *result, int base)
{
	int		len;

	len = calc(n, base);
	if (result == 0)
		return (0);
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		if (n % base > 9)
			result[--len] = (n % base) - 10 + 'A';
		else
			result[--len] = ((n % base) + '0');
		n = n / base;
	}
	return (result);
}

char	*ft_baseitoa_up(unsigned long n, int base)
{
	int		len;
	char	*result;

	len = calc(n, base);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result = compare(n, result, base);
	result[len] = '\0';
	return (result);
}
