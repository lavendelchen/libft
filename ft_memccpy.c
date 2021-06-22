/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:45:00 by shaas             #+#    #+#             */
/*   Updated: 2021/06/22 20:18:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//these headers & the main need to go

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*char_dst;
	const unsigned char	*char_src;

	char_dst = (unsigned char *)dst;
	char_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*char_dst = *char_src;
		if (*char_dst == (unsigned char)c)
			return (char_dst + 1);
		char_dst++;
		char_src++;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	src1[] = "<ü3";
	char	dst1[] = "fuck";
	char	*ptr1;

	char	src2[] = "<ü3";
	char	dst2[] = "fuck";
	char	*ptr2;

	ptr1 = memccpy(dst1, src1, 129, 4);
	ptr2 = ft_memccpy(dst2, src2, 129, 4);
	printf("memccpy: %p, %s\nft_memccpy: %p, %s", ptr1, dst1, ptr2, dst2);
}
