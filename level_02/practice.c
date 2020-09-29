/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:05:29 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 12:29:41 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (((octet >> i) & 1) + '0');
		write (1, &bit, 1);
	}
}

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
		(((octet >> 1) & 1) << 6) | \
		(((octet >> 2) & 1) << 5) | \
		(((octet >> 3) & 1) << 4) | \
		(((octet >> 4) & 1) << 3) | \
		(((octet >> 5) & 1) << 2) | \
		(((octet >> 6) & 1) << 1) | \
		(((octet >> 7) & 1) << 0);
}

unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = -1;
	while (str[len])
		len++;
	while (++i < --len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
	return (str);
}
