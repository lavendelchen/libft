/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:43:36 by shaas             #+#    #+#             */
/*   Updated: 2021/06/22 20:04:57 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c) // wenns als int gesehen wird, dann treated as signed char, wenn mans casted dann treated as unsigned char
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int		main(void)
{
	char	s[] = {'q', 129, 'f', '\0'};

	printf("ft_strchr: %s, %s\nstrchr: %s, %s", ft_strchr(s, 128), s, strchr(s, 129), s);
	return (0);
}
// wichtig nach nicht ascii charcatern suchen um alle faelle abzuklaeren
