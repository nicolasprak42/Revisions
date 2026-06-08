/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:26:11 by nprak             #+#    #+#             */
/*   Updated: 2026/06/07 10:33:41 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int		min;
	int		max;
	char	swap;

	min = 0;
	max = 0;
	while (str[max] != '\0')
		max++;
	max -= 1;
	while (min < max)
	{
		swap = str[min];
		str[min] = str[max];
		str[max] = swap;
		max--;
		min++;
	}
	return (str);
}
