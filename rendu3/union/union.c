/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:11:56 by nprak             #+#    #+#             */
/*   Updated: 2026/06/15 14:24:27 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int checkchar(char c, char *s)
{
    int i = 0;
    while (s[i])
    {
        if (c == s[i])
            return(1);
        i++;
    }
    return (0);
}
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] && (str[i] != '-'))
    {
        write(1, &str[i], 1);
        i++;
    }
    return;
}

int main (int ac, char **av)
{
    int i = 0;
    int position = 0;
    char count[26] = "-------------------------";
    char *s1 = av[1];
    char *s2 = av[2]; 

    if (ac != 3) 
        return 0;
    while (s1[i])
    {
        if (!checkchar(s1[i], count))
        {
            count[position] = s1[i];
            position++;
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (!checkchar(s2[i], count))
        {
            count[position] = s2[i];
            position++;
        }
        i++;
    }
    ft_putstr(count);
    write(1, "\n", 1);
}