/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:05:29 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 12:05:31 by trahman          ###   ########.fr       */
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
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0 & 1) << 7)) | \
	((octet >> 1 & 1) << 6)) | \
	((octet >> 2 & 1) << 5)) | \
	((octet >> 3 & 1) << 4)) | \
	((octet >> 4 & 1) << 3)) | \
	((octet >> 5 & 1) << 2)) | \
	((octet >> 6 & 1) << 1)) | \
	((octet >> 7 & 1) << 0)))
}

unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}
