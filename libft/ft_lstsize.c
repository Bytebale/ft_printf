/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:35:42 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:35:43 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		index;
	t_list	*temp;

	index = 1;
	temp = lst;
	if (lst == 0)
		return (0);
	while (temp->next != 0)
	{
		temp = temp->next;
		index++;
	}
	return (index);
}
