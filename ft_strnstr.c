/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:44:54 by shaas             #+#    #+#             */
/*   Updated: 2021/06/23 12:32:22 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && i < len)
	{
		count = 0;
		while (haystack[count] == needle[count] && (i + count) < len)
		{
			count++;
			if (needle[count] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	haystack[] = "Good Morning!";
	char	needle[] = "o";

	printf("ft_strnstr: %s, %s\nstrnstr: %s, %s", ft_strnstr(haystack, needle, 3), haystack, strnstr(haystack, needle, 3), haystack);
	return (0);
}
