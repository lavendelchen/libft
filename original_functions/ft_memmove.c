/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:23:08 by shaas             #+#    #+#             */
/*   Updated: 2021/07/07 14:54:24 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//main needs to fuck off
//so basically what was going on. i misunderstood the output of memmove.
//i thought it was messed up, but it wasn't. the problem was just, when dest was after src,
//it only printed half of the string, since i let it print dest, which didn't point
//to the start of the string. so i was confused as to why memmove seemed to be fucked up
//too, like memcpy, but in a different way. turns out it's actually perfectly fine. yay :))

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*char_dst;
	const char	*char_src;

	char_dst = (char *)dst;
	char_src = (const char *)src;
	i = 0;
	while (i < len)
	{
		if (char_dst > char_src)
		{
			*(char_dst + (len - 1)) = *(char_src + (len - 1));
			char_dst--;
			char_src--;
		}
		else
		{
			*char_dst = *char_src;
			char_dst++;
			char_src++;
		}
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	src1[12];
	char	*ptr1;

	char	src2[12];
	char	*ptr2;

	ptr1 = memmove(src1, "-2147483648", 12);
	ptr2 = ft_memmove(src2, "-2147483648", 12);
	printf("memmove: %p, %s\nft_memmove: %p, %s", ptr1, ptr1, ptr2, ptr2);
}
