/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 11:21:36 by nprak             #+#    #+#             */
/*   Updated: 2026/06/08 09:06:32 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int		size;

    size = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        size += 1;
    }
	return (size);
}
