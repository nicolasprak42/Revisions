/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:55:09 by nprak             #+#    #+#             */
/*   Updated: 2026/06/11 15:58:10 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_rrange(int start, int end)
{
	int	rrange;
	int i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int)*(start - end));
	else
		rrange = (int *)malloc(sizeof(int)*(end -start));
	i = 0;
	while (start != end)
	{
		range[i++] = end;
		end -= (start > end) ? -1 ; 1 ;
	}
	rrange[i] = end; 
	return (rrange);
	
}