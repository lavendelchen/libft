/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:14:16 by shaas             #+#    #+#             */
/*   Updated: 2021/06/22 20:41:18 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char	s[] = "lhelo :)";

	printf("ft_strrchr: %s, %s\nstrrchr: %s, %s", ft_strrchr(s, 'f'), s, strrchr(s, 'f'), s);
	return (0);
}
