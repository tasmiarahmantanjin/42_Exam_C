/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:09:14 by trahman           #+#    #+#             */
/*   Updated: 2020/11/06 14:43:19 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int nbr;

	if (argc == 2)
	{
		i = 2;
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr /= i; // nbr = (nbr / i)(to save the reminder)
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
