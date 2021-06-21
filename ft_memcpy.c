/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:10:18 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 17:44:38 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to remove the main function + header files

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*char_dst;
	const char	*char_src;

	char_dst = (char *)dst;
	char_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		*char_dst = *char_src;
		char_dst++;
		char_src++;
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	src[] = "wh⬇️tever";
	char	dst[] = "this is us";

	char	src2[] = "wh⬇️tever";
	char	dst2[] = "this is us";
	ft_memcpy(dst, src, 4);
	memcpy(dst2, src2, 4);
	printf("%s, %s", dst, dst2);
}
