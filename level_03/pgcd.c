/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:53:20 by trahman           #+#    #+#             */
/*   Updated: 2020/10/19 20:48:09 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[2]);

	if (argc == 3)
	{
		if ((nbr1 > 0) && (nbr2 > 0))
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 = nbr1 - nbr2;
				else
					nbr2 = nbr2 - nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
