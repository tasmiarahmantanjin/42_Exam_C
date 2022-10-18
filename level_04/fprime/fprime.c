/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasmiarahman <tasmiarahman@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:09:14 by trahman           #+#    #+#             */
/*   Updated: 2022/10/06 14:48:18 by tasmiarahma      ###   ########.fr       */
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
