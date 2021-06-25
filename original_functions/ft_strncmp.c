/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:45:35 by shaas             #+#    #+#             */
/*   Updated: 2021/06/24 13:02:37 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	const unsigned char *un_s1;
	const unsigned char *un_s2;

	un_s1 = (const unsigned char *)s1;
	un_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*un_s1 != *un_s2)
			return (*un_s1 - *un_s2);
		if (*un_s1 == '\0' && *un_s2 == '\0')
			return (0);
		un_s1++;
		un_s2++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[20] = "hell"; // ⬇️ - ⬆️ +
	char	str2[20] = "hello";

	printf("strncmp:  %d\n", strncmp(str1, str2, 3));
	printf("ft_strncmp:  %d", ft_strncmp(str1, str2, 3));
	return (0);
}
