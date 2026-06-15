/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 13:35:40 by nprak             #+#    #+#             */
/*   Updated: 2026/06/15 14:52:53 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void search_and_replace(char *s1, char s2, char s3)
{
	while (*s1)
	{
		if (*s1 == s2)
			*s1 = s3;
		write(1, &*s1, 1);
		s1++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
}
