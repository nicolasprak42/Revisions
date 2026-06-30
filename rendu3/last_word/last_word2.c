/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprak <nprak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:14:42 by nprak             #+#    #+#             */
/*   Updated: 2026/06/29 15:14:49 by nprak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    last_word(char *str)
{
    int start;
    int end;

    end = 0;
    while (str[end])
        end++;
    end--;
    while (end >= 0 && str[end] == ' ')
        end--;
    start = end;
    while (start >= 0 && str[start] != ' ')
        start--;
    start++;
    while (start <= end)
    {
        write(1, &str[start], 1);
        start++;
    }
    write(1, "\n", 1);
}