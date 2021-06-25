/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:45:00 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:26:40 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
