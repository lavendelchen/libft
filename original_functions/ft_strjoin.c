/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:34:21 by shaas             #+#    #+#             */
/*   Updated: 2021/07/05 20:21:16 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2) //sonderfaelle abklaeren, was wenn leer und so
{
	int		i;
	size_t	len_1;
	size_t	len_2;
	char	*join;

	i = 0;
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	join = (char *)malloc(len_1 + len_2 + 1);
	if (join == NULL)
		return (join);
	while (*s1 != '\0')
	{
		join[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		join[i] = *s2;
		i++;
		s2++;
	}
	join[i] = '\0';
	return (join);
}

int	main(void)
{
	char	s1[] = "hii";
	char	s2[] = "hii";
	char	*join;

	join = ft_strjoin(s1, s2);
	printf("%s", join);
	free(join);
	return (0);
}
