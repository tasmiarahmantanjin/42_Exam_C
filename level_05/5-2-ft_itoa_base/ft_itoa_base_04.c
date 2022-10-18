/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_final.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:09:08 by trahman           #+#    #+#             */
/*   Updated: 2022/09/28 19:41:11 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_abs(int nb)
{
    if (nb < 0)
        nb = -nb;
    return (nb);
}

char *ft_itoa_base(int value, int base)
{
    char *str;
    int len;
    int tmp;
    char *base_string;

    int flag;

    len = 0;
    base_string = "0123456789ABCDEF";
    flag = 0;

    tmp = value;

    if (base < 2 || base > 16)
        return (0);

    if (value < 0 && base == 10)
        flag = 1;

    while (tmp /= base)
        len++;
    len = len + flag + 1;

    str = (char *)malloc(sizeof(char) * len + 1);
    str[len] = '\0';

    if (flag == 1)
        str[0] = '-';

    while (len > flag)
    {
        str[len - 1] = base_string[ft_abs(value % base)];
        len--;
        value /= base;
    }

    return (str);
}

int main(int ac, char *av[])
{
    if (ac == 3)
        printf("%s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));

    return 0;
}
