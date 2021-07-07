/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:36:02 by shaas             #+#    #+#             */
/*   Updated: 2021/07/07 20:10:24 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (split == NULL)
		return (split);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++; // outsource, striteri
			split[k] = (char *)malloc(sizeof(char) * (j - i + 1));
			if (split[k] == NULL)
				return (NULL);
			ft_strlcpy(split[k], &s[i], j - i + 1);
			k++;
			i = j - 1;
		}
		i++;
	}
	split[k] = NULL;
	return (split);
}
