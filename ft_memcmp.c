/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:18:10 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 17:44:33 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//"This behavior is not required by C and portable code should
//only depend on the sign of the returned value." what does that mean??

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*char_s1;
	const unsigned char	*char_s2;

	char_s1 = (const unsigned char *)s1;
	char_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*char_s1 != *char_s2)
			return (*char_s1 - *char_s2);
		char_s1++;
		char_s2++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[20] = "hel⬇️tyjtyj"; // ⬇️ - ⬆️ +
	char	str2[20] = "heliiii";

	printf("memcmp:  %d\n", memcmp(str1, str2, 6));
	printf("ft_memcmp:  %d", ft_memcmp(str1, str2, 6));
	return (0);
}
