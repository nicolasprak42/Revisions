/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:47:44 by nprak             #+#    #+#             */
/*   Updated: 2026/06/07 17:41:22 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digits(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				i;
	char			*str;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	i = count_digits(nb) + (n < 0) - 1;
	str = malloc(count_digits(nb) + (n < 0) + 1);
	if (!str)
		return (NULL);
	str[i + 1] = '\0';
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}