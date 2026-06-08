/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:13:56 by nprak             #+#    #+#             */
/*   Updated: 2026/06/07 11:45:39 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list	t_list;

struct s_list
{
	int		data;
	t_list	*next;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

#endif