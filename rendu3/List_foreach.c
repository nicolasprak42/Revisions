/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List_foreach.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:13:48 by nprak             #+#    #+#             */
/*   Updated: 2026/06/08 11:34:03 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
