/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:13:56 by nprak             #+#    #+#             */
/*   Updated: 2026/06/29 15:00:17 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

t_list *sort_list(t_list *lst, int (*cmp)(int, int));

#endif