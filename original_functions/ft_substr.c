/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:33:23 by shaas             #+#    #+#             */
/*   Updated: 2021/07/06 15:46:22 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

//len is length, not size, so without null byte. just how many characters are copied
//subs will be null terminated in any case (right?)
//what if len = 0
//what if start is later than the string -> i think its undefined behavior. there's no way to check it.


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

char	*ft_substr(const char *s, unsigned int start, size_t len) //len = 3, start = 6
{
	char	*subs;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && s[i + start] != '\0' && start < ft_strlen(s)) //first i find out how many chars we copy, then we allocate enough space for that, then we copy into the allocated string
		i++;
	subs = (char *)malloc(i + 1);
	if (subs == NULL)
		return (subs);
	while (j < i)
	{
		subs[j] = s[j + start];
		j++;
	}
	subs[j] = '\0';
	return (subs);
}

int	main(void)
{
	char	str[] = "Bye!";
	char	*substr;

	substr = ft_substr(str, 2, 3);
	printf("str: %s\nsubstr: %s", str, substr);
	free(substr);
	return (0);
}
