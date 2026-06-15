/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:13:24 by nprak             #+#    #+#             */
/*   Updated: 2026/06/12 16:42:13 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = malloc(sizeof(char*) * 1000);

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i])
		{	
			k = 0;
			if (str[i] > ' ')
			{
				tab[j] = malloc(sizeof(char) * 1000);
				while (str[i] && str[i] > ' ')
					tab[j][k++] = str[i++];
				tab[j][k] = '\0';
				j++;
			}
			else
				i++;
		}
		tab[j] = NULL;
	}
	return (tab);
}
