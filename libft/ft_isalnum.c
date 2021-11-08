/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:57:33 by jzhou             #+#    #+#             */
/*   Updated: 2021/11/08 21:29:22 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
int	ft_isalnum(int argument)
{
	if (argument >= 65 && argument <= 90)
		return (1);
	else if (argument >= 97 && argument <= 122)
		return (1);
	else if (argument >= 48 && argument <= 57 )
		return (1);
	else
		return (0);
}
