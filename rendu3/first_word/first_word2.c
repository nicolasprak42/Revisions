/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:13:24 by nprak             #+#    #+#             */
/*   Updated: 2026/06/29 15:13:29 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    first_word(char *str)
{
    int    i;

    i = 0;
    while (str[i] == ' ' && str[i] == '\t')
    {
        i++;
    }
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
int    main(void)
{
    char    str[] = "hnfkjghkjfhg dhfkjdhkj";

    first_word(str);
}