/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:18:43 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:29:29 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*char_s;

	char_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*char_s == (unsigned char) c)
			return ((void *)char_s);
		char_s++;
		i++;
	}
	return (NULL);
}
