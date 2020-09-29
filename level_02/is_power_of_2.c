/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:45:35 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 12:14:04 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return ((n & (-n)) == n ? 1: 0);
}

int main(void)
{
	unsigned int num[7];
	num[0] = 0;
	num[1] = 200;
	num[2] = 32;
	num[3] = 256;
	num[4] = 13;
	num[5] = 1000;
	num[6] = 1024;
	int i;

	i = 0;
	while(i <= 6)
	{
	if (is_power_of_2(num[i]))
		printf("%s %d\n", "yep", num[i]);
	else
		printf("%s %d\n", "nope", num[i]);
	i++;
	}
}