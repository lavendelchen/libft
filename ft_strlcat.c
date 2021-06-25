/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:37:50 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:27:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	ret = ft_strlen(src) + ft_strlen(dst);
	if (ft_strlen(dst) > dstsize)
		ret = ret - (ft_strlen(dst) - dstsize);
	i = 0;
	while (*dst != '\0')
	{
		dst++;
		i++;
	}
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
