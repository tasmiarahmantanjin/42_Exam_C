/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:35:14 by trahman           #+#    #+#             */
/*   Updated: 2022/09/29 10:33:37 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define abs(a) (a < 0) ? -a : a
char *g_base = "0123456789ABCDEF";

char *ft_itoa_base(int value, int base)
{
	int negative = (base == 10 && value < 0) ? 1 : 0;

	int size = (negative) ? 3 : 2;

	int temp = value;

	while (temp /= base)
		size++;

	char *res = malloc(sizeof(char) * size);

	res[--size] = '\0';

	res[--size] = g_base[abs(value % base)];

	while (value /= base)
		res[--size] = g_base[abs(value % base)];

	if (negative == 1)
		res[--size] = '-';

	return res;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	}
}

/*
** Usage: ./a.out 23435453 16
**        ./a.out 23435453 2
**        ./a.out 23435453 10
**        ./a.out 23435453 8
** For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".
*/