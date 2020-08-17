/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:25:02 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 18:40:36 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
				write(1, &argv[1][i++], 1);
			write(1, "\n", 1);
	}
	return (0);
}
