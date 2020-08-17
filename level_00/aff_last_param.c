/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:41:15 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 18:46:41 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i++], 1);
		}
	}
	write(1,"\n", 1);
	return (0);
}
