/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 22:05:03 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 22:28:40 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int i = 5;
	int j = 7;

	printf("Value of a before swap: %d\n", i);
	printf("Value of b before swap: %d\n", j);
	
	int	*ptr_i;
	int	*ptr_j;

	ptr_i = &i; //we need to assign value like this as the function perameter type is int *pointer
	ptr_j = &j;
	ft_swap(ptr_i, ptr_j);
	printf("Value of a after swap: %d\n", i);
	printf("Value of b after swap: %d\n", j);
	return (0);
}
*/