/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:34:42 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 12:10:12 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main()
{
	printf("%d", reverse_bits(38));
	return (0);
}
