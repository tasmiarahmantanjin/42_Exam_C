/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:09:08 by trahman           #+#    #+#             */
/*   Updated: 2022/09/20 15:23:50 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #define BUFF_SIZE (4096)

int main(int ac, char *av[])
{
    int i;
    int j;
    int t[32] = {0};

    //
    if (ac == 1)
    {
        write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
        return (0);
    }

    // Two
    i = 1;
    while (i < ac)
    {
        j = 1;
        if (av[i][0] == '-')
        {
            // Check Invalid
            while (av[i][j] && av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                // Check '-h'
                if (av[i][j] == 'h')
                {
                    write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
                    return 0;
                }

                t['z' - av[i][j] + 6] = 1;
                j++;
            }

            // Check Invalid
            if (av[i][j])
            {
                write(1, "Invalid Option\n", 16);
                return (0);
            }
            j++;
        }
        i++;
    }

    // Three
    i = 0;
    while (i < 32)
    {
        t[i] = '0' + t[i];
        write(1, &t[i++], 1);

        if (i == 32)
            write(1, "\n", 1);
        else if (i % 8 == 0)
            write(1, " ", 1);
    }

    return 0;
}