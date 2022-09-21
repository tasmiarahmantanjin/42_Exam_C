/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:35:14 by trahman           #+#    #+#             */
/*   Updated: 2022/09/15 15:15:52 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa_base(int value, int base)
{
	int len;
	long nbr;
	char *pointer;
	char *base_string = "0123456789ABCDEF";

	if (value == 0)
		return ("0");
	len = 0;

	nbr = value;

	while (nbr)
	{
		nbr /= base;
		len += 1;
	}

	nbr = value;

	if (nbr < 0)
	{
		if (base == 10)
			len += 1;
		nbr *= -1;
	}

	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';

	while (nbr)
	{
		pointer[--len] = base_string[nbr % base];
		nbr /= base;
	}

	if (value < 0 && base == 10)
		pointer[0] = '-';

	return (pointer);
}

/*
** Usage: ./a.out 23435453 16
**        ./a.out 23435453 2
**        ./a.out 23435453 10
**        ./a.out 23435453 8
** For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".

*/

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	}
}

/*
#include <stdlib.h>

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
*/

/*
#include <stdlib.h>
#include "libft.h"
char	*ft_itoa_base(int value, int base)
{
	int				size;
	long			nbr;
	char			*result;
	char			*ref_base;

	nbr = value;
	ref_base = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (NULL);
	size = ft_numlen(nbr, base);
	if (!(result = (char*)malloc(sizeof(*result) * (size + 1))))
		return (NULL);
	result[size--] = '\0';
	result[0] = (value < 0 ? '-' : '0');
	if (value < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		result[size--] = ref_base[nbr % base];
		nbr /= base;
	}
	return (result);
}
*/