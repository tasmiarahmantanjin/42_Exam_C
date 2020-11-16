/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:28:05 by trahman           #+#    #+#             */
/*   Updated: 2020/11/03 12:32:39 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** https://hackmd.io/@ep8OMr9mS8-jCj2zXotKDg/ryoVoodLz?type=view
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (!str)
		return (0);
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isvalid(*str, str_base))
	{
		if (*str >= 'A' && *str <= 'F')
			result = (result * str_base) + (*str - 'A' + 10);
		else if (*str >= 'a' && *str <= 'f')
			result = (result * str_base) + (*str - 'a' + 10);
		else
			result = (result * str_base) + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("011", atoi("2")));
	printf("%d\n", ft_atoi_base("16", atoi("8")));
	printf("%d\n", ft_atoi_base("123", atoi("10")));
	printf("%d\n", ft_atoi_base("AAF", atoi("16")));
	printf("%d\n", ft_atoi_base("f", atoi("16")));
	printf("%d\n", ft_atoi_base("ABC", atoi("16")));
	printf("%d\n", ft_atoi_base("AAcc", atoi("16")));
}

