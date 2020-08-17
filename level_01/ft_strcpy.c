/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 22:47:29 by trahman           #+#    #+#             */
/*   Updated: 2020/08/17 23:08:54 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
	s1[i] = s2[i];
	i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int	main(void)
{
	char	dest[] = "Tasmia";
	char	src[] = "Rahman";

	printf("intial Destination: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After calling the function: %s\n", (ft_strcpy(dest, src)));
	return (0);
}
*/