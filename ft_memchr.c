/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:18:43 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 17:44:28 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//these headers & the main need to go

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*char_s;

	char_s = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*char_s == c)
			return (char_s);
		char_s++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	s1[] = "hello darling";
	char	*ptr1;

	char	s2[] = "hello darling";
	char	*ptr2;

	ptr1 = memchr(s1, 114, 20);
	ptr2 = ft_memchr(s2, 114, 20);
	printf("memchr: %s, %s\nft_memchr: %s, %s", ptr1, s1, ptr2, s2);
}
