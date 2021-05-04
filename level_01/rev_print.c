/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:19:25 by trahman           #+#    #+#             */
/*   Updated: 2020/08/18 13:25:37 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int letter;

	i = 0;
	if (argc == 2)
	{
		while (argv [1][i] != '\0')
			i++;
		while (i)
			write(1, &argv[1][--i], 1);
	}
		write (1, "\n", 1);
		return (0);
}

