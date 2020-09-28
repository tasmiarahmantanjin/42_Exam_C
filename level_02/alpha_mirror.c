/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 14:02:52 by trahman           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/09/23 09:29:40 by trahman          ###   ########.fr       */
=======
/*   Updated: 2020/09/23 09:47:44 by trahman          ###   ########.fr       */
>>>>>>> ecee1059a5014c61e7849e3d0f6d316fa6b0150e
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = 'Z' - argv[1][i] + 'A';
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = 'z' - argv[1][i] + 'a';
			write(1, &argv[1][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
