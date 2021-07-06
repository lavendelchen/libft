/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:34:43 by shaas             #+#    #+#             */
/*   Updated: 2021/07/05 20:26:13 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//isses ok wenn malloc mehr platz schafft als sein muss? -> ja, jeremie is damit durchgekommen
//was wenn nix getrimmt wird, vorne hinten, klappt die funktion
//need to check what if nothing in set -> think its fine

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t	len;
	char	*trim;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s1);
	trim = (char *)malloc(len + 1);
	if (trim == NULL)
		return (trim);
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0') // i could put len > 0 in a bigger while , which would be prettier, but if i do it like this, i can fit everything in one function
		i++;
	while (ft_strchr(set, s1[len - 1 - j]) != NULL && s1[i] != '\0') // this encompasses an empty string, and if its only trimmed at the start or only at the end.
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

int	main(void)
{
	char	s1[] = "ffffdcba";
	char	set[] = "f";
	char	*trim;

	trim = ft_strtrim(s1, set);
	printf("%s\n%s", s1, trim);
	free(trim);
	return (0);
}
