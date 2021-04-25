/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:53:21 by trahman           #+#    #+#             */
/*   Updated: 2020/10/13 12:10:14 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
		{
			while (argv[1][i] && argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
					i++;
				j++;
			}
			if (argv[1][i] == '\0')
				write (1, "1", 1);
			else
				write (1, "0", 1);
		}
	write (1, "\n", 1);
	return (0);
}

