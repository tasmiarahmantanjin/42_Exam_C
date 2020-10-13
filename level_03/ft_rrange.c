/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:28:57 by trahman           #+#    #+#             */
/*   Updated: 2020/10/13 11:50:15 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	i;

	i = 0;
	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		range[i++] = end;
		end -= (start > end) ? -1 : 1;
	}
	range[i] = end;
	return (range);
}

int	main(void)
{
	int i;
	int *range;

	i = 0;
	range = ft_rrange(0, -3);
	while (i < 4)
	{
		printf("The value of: %d\n", range[i++]);
	}
	return (0);
}
