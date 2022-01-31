/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:34:21 by shaas             #+#    #+#             */
/*   Updated: 2022/01/30 21:10:00 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*is not null protected. will segfault if you enter NULL string.*/
char	*ft_strjoin(const char *s1, const char *s2)
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
