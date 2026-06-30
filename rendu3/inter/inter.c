/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:35:12 by nprak             #+#    #+#             */
/*   Updated: 2026/06/07 12:48:12 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkchar(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!checkchar(av[1], av[1][i], i)
			&& checkchar(av[2], av[1][i], ft_strlen(av[2])))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
