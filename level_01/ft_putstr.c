/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 22:31:40 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 22:45:47 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

/*
int	main(void)
{
	char *ptr;

	ptr = "Tasmia Rahman Tanjin";
	ft_putstr(ptr);
	write(1, "\n", 1);
	return (0);
}
*/