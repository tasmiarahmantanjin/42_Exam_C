/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:35:14 by trahman           #+#    #+#             */
/*   Updated: 2022/10/18 13:58:46 by tasmiarahma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa_base(int value, int base)
{
	int len;
	long nbr;
	char *str;
	char *base_string = "0123456789ABCDEF";

	len = 0;
	nbr = value;

	if (value == 0)
		return ("0");

	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';

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

	if (value < 0 && base == 10)
		str[0] = '-';

	while (nbr)
	{
		str[--len] = base_string[nbr % base];
		nbr /= base;
	}

	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	}
}

int main(void)
{
	printf("%s\n", ft_itoa_base(12, 2));
	printf("%s\n", ft_itoa_base(12, 8));
	printf("%s\n", ft_itoa_base(12, 10));
	printf("%s\n", ft_itoa_base(12, 16));

	printf("%s\n", ft_itoa_base(123, 10));
	printf("%s\n", ft_itoa_base(-123, 10));

	printf("%s\n", ft_itoa_base(-2147483648, 10));
	printf("%s\n", ft_itoa_base(2147483647, 10));
	printf("%s\n", ft_itoa_base(-2147483647, 10));

	printf("%s\n", ft_itoa_base(0, 2));
	printf("%s\n", ft_itoa_base(0, 4));
	printf("%s\n", ft_itoa_base(0, 8));
	printf("%s\n", ft_itoa_base(0, 16));

	printf("%s\n", ft_itoa_base(23435453, 2));
	printf("%s\n", ft_itoa_base(23435453, 8));
	printf("%s\n", ft_itoa_base(23435453, 10));
	printf("%s\n", ft_itoa_base(23435453, 16));

	printf("%s\n", ft_itoa_base(23435453, 1));
	printf("%s\n", ft_itoa_base(23435453, 17));

	return 0;
}