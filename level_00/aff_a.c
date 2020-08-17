/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:51:50 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 18:17:40 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "a\n", 2);
	if(argc == 2)
		{
			while (argv[1][i])
			{
				if (argv[1][i] == 'a')
					{
						write(1, "a", 1);
						break ;
					}
				i++;
			}
			write(1, "\n", 1);
		}
	return (0);
}
