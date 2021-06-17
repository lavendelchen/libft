/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:10:18 by shaas             #+#    #+#             */
/*   Updated: 2021/06/17 17:22:15 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to remove the main function + header files

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	char_dst = (char *)dst;
	char_src = (char *)src;
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
	int	src[] = {1200, 1, 2, 3};
	int	dst[] = {0, 1, 2, 3};

	ft_memcpy(dst, src, 4);
	printf("%d", *dst);
}
