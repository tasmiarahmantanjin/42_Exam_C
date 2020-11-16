/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 22:09:43 by trahman           #+#    #+#             */
/*   Updated: 2020/11/03 11:14:31 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int p) // driver function.
{
	char	*str;
	
	str = "0123456789abcdef"; // base array to find all the hexa values.
	if (p >= 16)
		print_hex(p / 16); // recursive call if number is greater then base.
	write (1, &str[p % 16], 1);
}

/* Another solution of print_hex function
void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
} */

int		ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	if (!str)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str) - '0';
		str++;
	}
	return (sign * result);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
