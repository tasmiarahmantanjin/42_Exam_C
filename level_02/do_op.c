/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:47:20 by trahman           #+#    #+#             */
/*   Updated: 2020/09/23 10:04:37 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if(argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if(argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if(argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if(argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if(argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	write(1, "\n", 1);
	return (0);
}

