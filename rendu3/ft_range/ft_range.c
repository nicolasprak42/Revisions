/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:44:17 by nprak             #+#    #+#             */
/*   Updated: 2026/06/12 15:08:45 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int start, int end)

{
	int	*range;
	int	i;

	if (start > end)
		range = malloc(sizeof(int) * (start - end) + 1);
	else
		range = malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

