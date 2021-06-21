/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:23:08 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 15:39:13 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//main needs to fuck off

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	char_dst = (char *)dst;
	char_src = (char *)src;
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
	char	src1[] = "Start stop";
	char	*ptr1;

	char	src2[] = "Start stop";
	char	*ptr2;

	ptr1 = memmove(&src1[1], &src1[0], 3);
	ptr2 = ft_memmove(&src2[1], &src2[0], 3);
	printf("memmove: %p, %s\nft_memmove: %p, %s", ptr1, src1, ptr2, src2);
}
