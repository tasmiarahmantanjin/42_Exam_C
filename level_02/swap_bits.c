/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:40:09 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 12:04:59 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char c)
{
		return ((c >> 4) | (c << 4));
}

int main(void)
{
	char letter_t;
	char letter_G;
	letter_t = 't';
	letter_G = 'G';

	printf("letter_t after swap: %c", swap_bits(letter_t));
	printf("\n");
	printf("letter_G after swap: %c", swap_bits(letter_G));
	printf("\n");
	return (0);
}
