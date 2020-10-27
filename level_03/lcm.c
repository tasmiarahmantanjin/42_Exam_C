/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:35:16 by trahman           #+#    #+#             */
/*   Updated: 2020/10/27 10:18:02 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		old_a;
	int		old_b;

	gcd = 0;
	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
			break ;
		b = b % a;
		if (b == 0)
			break ;
		a = a % b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (old_a / gcd * old_b) : 0);
} */

// C program to find LCM of two numbers 
#include <stdio.h> 

// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Function to return LCM of two numbers 
int lcm(int a, int b) 
{
	return ((a * b) / (gcd(a, b)));
}

// Driver program to test above function 
int main() 
{
	int a = 15, b = 20;
	printf("LCM of %d and %d is: %d\n ", a, b, lcm(a, b));
	return 0;
}


/* Another solution of lcm.c

unsigned int gcd(unsigned int a, unsigned int b)
{
	return b ? gcd(b, a % b) : a;
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int GCD = gcd(a, b);
	return GCD ? (a * b / GCD) : 0;
}


int	main(void)
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}*/
