/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 11:22:23 by nprak             #+#    #+#             */
/*   Updated: 2026/06/07 11:27:11 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_SIZE_H
# define LIST_SIZE_H

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

int	ft_list_size(t_list *begin_list);

#endif
