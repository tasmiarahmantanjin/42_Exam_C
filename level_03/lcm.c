/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:35:16 by trahman           #+#    #+#             */
/*   Updated: 2020/10/27 10:35:49 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to find LCM of two numbers
#include <stdio.h>

// Recursive function to return gcd of a and b 
int				gcd(int a, int b) 
{
	if (a == 0)
		return b;
	return (gcd(b % a, a));
}

// Function to return LCM of two numbers 
unsigned int	lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / (gcd(a, b)));
}

// Driver program to test above function 
int				main()
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}

