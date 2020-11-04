/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:38:25 by trahman           #+#    #+#             */
/*   Updated: 2020/11/04 11:24:18 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		len;
	long	n_tmp;
	char	*str;

	len = 0;
	n_tmp = nbr;
	if (nbr == -2147483648)
		return ("-2147483648");
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
		str[0] = '-';
	}
	while (n_tmp)
	{
		n_tmp /= 10;
		len++;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(45));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	return (0);
}
