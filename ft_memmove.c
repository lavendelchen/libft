/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:23:08 by shaas             #+#    #+#             */
/*   Updated: 2021/06/18 15:14:04 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{i
	size_t	i;
	char	buf[len];
	char	*char_dst;
	char	*char_src;

	char_dst = (char *)dst;
	char_src = (char *)src;
	buf
	i = 0;
	while (i < len)
	{
		buf[i] = char_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		char_dst[i] = buf[i];
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

	ptr1 = memmove(&src1[2], &src1[0], 5);
	ptr2 = memcpy(&src2[2], &src2[0], 5);
	printf("memmove: %p, %s\nmemcpy: %p, %s", ptr1, ptr1, ptr2, ptr2);
}
