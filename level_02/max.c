/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:32:29 by trahman           #+#    #+#             */
/*   Updated: 2020/09/28 10:13:07 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

#include <unistd.h>
#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int				max_value;

	i = 0;
	max_value = tab[i];
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > (max_value + 1))
			max_value = tab[i];
		i++;
	}
	return (max_value);
}

int	main()
{
	int	array[] = {1, 23453, 55, 12, 999};
	int	len = 5;

	printf("%d", max(array, len));
	return (0);
}
