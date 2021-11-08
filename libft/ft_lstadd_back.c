/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:36:15 by lshonta           #+#    #+#             */
/*   Updated: 2021/11/08 21:36:16 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (new == 0)
		return ;
	if (temp == 0)
	{
		*lst = new;
		return ;
	}
	while ((*temp).next != 0)
		temp = (*temp).next;
	(*temp).next = new;
}
