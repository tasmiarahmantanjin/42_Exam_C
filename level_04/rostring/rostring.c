/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:47:50 by angavrel          #+#    #+#             */
/*   Updated: 2022/10/06 12:28:24 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isblank(char c)
{
    return (c == ' ' || c == '\t');
}

void rostring(char *s)
{
    int i = 0;
    int first_word_length = 0;

    while (s[i])
    {
        // Check if there is any whitespace at the beginning
        // If yes skip and move forward
        // Case 01: where we will have whitespace at the start
        while (ft_isblank(s[i]))
            i++;

        // Case 02: No whitespace at the beginning
        if (s[i] && !ft_isblank(s[i]))
        {
            // if it's the beginning
            if (first_word_length == 0)
                // Calculate the first word len and value of i
                // keep the length of first word for later
                while (s[i] && !ft_isblank(s[i++]))
                    first_word_length++;
            else
            {
                // for other words, just write it to stdout (+ one whitespace)
                while (s[i] && !ft_isblank(s[i]))
                    write(1, &s[i++], 1);
                write(1, " ", 1);
            }
        }
    }

    // Write first word
    i = 0;
    while (ft_isblank(s[i]))
        i++;
    // while (first_word_length > i)
    while (first_word_length--)
        write(1, &s[i++], 1);
}

int main(int ac, char *av[])
{
    if (ac > 1 && av[1])
        rostring(av[1]);

    write(1, "\n", 1);
    return (0);
}
