/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:23:08 by shaas             #+#    #+#             */
/*   Updated: 2021/06/28 15:50:56 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_outsource(char *char_dst, const char *char_src, size_t len)
{
	size_t	i;

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
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dst;
	const char	*char_src;

	if (!dst && !src)
		return (NULL);
	char_dst = (char *)dst;
	char_src = (const char *)src;
	ft_outsource(char_dst, char_src, len);
	return (dst);
}
