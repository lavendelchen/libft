/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:34:43 by shaas             #+#    #+#             */
/*   Updated: 2021/07/06 13:14:49 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	char	*trim;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s1);
	trim = (char *)malloc(len + 1);
	if (trim == NULL)
		return (trim);
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[len - 1 - j]) != NULL && s1[i] != '\0')
		j++;
	while (i <= (len - 1 - j) && s1[i] != '\0')
	{
		trim[k] = s1[i];
		i++;
		k++;
	}
	trim[k] = '\0';
	return (trim);
}
