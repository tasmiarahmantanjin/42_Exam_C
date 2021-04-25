/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:50:32 by trahman           #+#    #+#             */
/*   Updated: 2020/10/20 12:07:14 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char const **argv)
{
	int	i;
	int	flg;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == ' ') || (argv[1][i]== '\t'))
			i++;
		while (argv[1][i])
		{
			if ((argv[1][i] == ' ') || (argv[1][i]== '\t'))
				flg = 1;
			if (!(argv[1][i] == ' ') || (argv[1][i]== '\t'))
			{
				if(flg)
					write(1, " ", 1);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

