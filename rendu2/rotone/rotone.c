/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:06:49 by nprak             #+#    #+#             */
/*   Updated: 2026/06/11 15:30:33 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				letter += 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				letter += 1;
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				letter -= 25;
			write(1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
