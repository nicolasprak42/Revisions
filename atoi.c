/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@learner.42.tech>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:04:04 by nprak             #+#    #+#             */
/*   Updated: 2026/03/25 13:56:47 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = - sign;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{ 
		res = res * 10 + str[i] -'0';
		i++;
	}
	return(res * sign);
}
	
int 	main(void)
{
	printf("%d\n", ft_atoi("--42+5"));
}
