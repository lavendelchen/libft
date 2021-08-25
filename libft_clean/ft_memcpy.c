/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:10:18 by shaas             #+#    #+#             */
/*   Updated: 2021/06/28 13:00:44 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*char_dst;
	const char	*char_src;

	if (!dst && !src)
		return (NULL);
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
