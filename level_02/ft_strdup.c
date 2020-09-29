/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 09:12:45 by trahman           #+#    #+#             */
/*   Updated: 2020/09/29 10:58:35 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;
	
	str = "42 school";
	str2 = ft_strdup(str);
	str3 = strdup(str);
	printf("%s\n", str);
	printf("%s\n", str2);
	printf("%s\n", str3);
}
