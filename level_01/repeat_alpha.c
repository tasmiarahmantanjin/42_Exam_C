/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:44:28 by trahman           #+#    #+#             */
/*   Updated: 2020/08/18 13:47:15 by trahman          ###   ########.fr       */
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
		while (argv [1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter = argv[1][i] - 63;
					while (--letter)
						write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter = argv[1][i] - 95;
					while (--letter)
						write(1, &argv[1][i], 1);
			}
			write (1, &argv[1][i], 1);
			i += 1;
		}
	}
		write (1, "\n", 1);
		return (0);
}
