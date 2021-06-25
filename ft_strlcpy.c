/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:38:14 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:27:12 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	ret = ft_strlen(src);
	i = 0;
	while (i < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (ret);
}
