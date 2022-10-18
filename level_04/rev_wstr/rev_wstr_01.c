/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 10:07:32 by exam              #+#    #+#             */
/*   Updated: 2022/10/05 19:55:23 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isblank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void rev_wstr(char *s)
{
    int wc = 0;
    int i = 0;
    int len;
    int a;

    // Calculate total word in the string
    while (s[i])
        if (!ft_isblank(s[i++]) && (!wc || ft_isblank(s[i - 2])))
            ++wc;

    // Start the loop from the end of loop
    while (s[--i])
    {
        // Check is not whitespace and and with word count
        if (!ft_isblank(s[i]) && wc--)
        {
            a = 0;
            len = 1;

            // calculate len from last word one by one
            while (s[i - 1] && !ft_isblank(s[i - 1]) && ++len)
                --i;

            // Print one by one with len as ref
            while (len-- && write(1, &s[i + a++], 1))
                ;

            // Add space after every word
            (wc) ? write(1, " ", 1) : 0;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2 && *av[1])
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
