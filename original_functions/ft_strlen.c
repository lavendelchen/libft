/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:23:33 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 18:40:36 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	num;

	num = 0;
	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}

int	main(void)
{
	char	str1[20] = "hello";
	char	str2[20] = "hello";

	printf("strlen:  %zu\n", strlen(str1));
	printf("ft_strlen:  %zu", ft_strlen(str2));
	return (0);
}
