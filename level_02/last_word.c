/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:10:18 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 11:25:13 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int start;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while(argv[1][i])
	{
		if(argv[1][i] == ' ' && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0')
			start = i + 1;
		i++;
	}
	while(argv[1][start] != ' ' && argv[1][start] != '\0')
	{
		write(1, &argv[1][start], 1);
		start++;
	}
	write(1, "\n", 1);
	return 0;
}
