/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 09:03:24 by nprak             #+#    #+#             */
/*   Updated: 2026/06/08 09:18:19 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			write(1, "a", 1);
		if (str[i] == 'b')
			write(1, "bb", 2);
			if (str[i] == 'c')
			write(1, "ccc", 3);
		if (str[i] == 'd')
			write(1, "dddd", 4);
		if (str[i] == 'e')
			write(1, "eeeee", 5);
		if (str[i] == 'f')
			write(1, "ffffff", 6);
		
	}

}