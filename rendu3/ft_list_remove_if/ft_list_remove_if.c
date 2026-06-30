/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:35:27 by nprak             #+#    #+#             */
/*   Updated: 2026/06/29 11:13:01 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
	}
}
