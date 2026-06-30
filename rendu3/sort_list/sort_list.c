/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:12:49 by nprak             #+#    #+#             */
/*   Updated: 2026/06/29 14:59:17 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp_data;
	t_list	*begin;

	if (!lst)
		return (NULL);
	begin = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			tmp_data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp_data;
			lst = begin;
		}
		else
			lst = lst->next;
	}
	return (begin);
}