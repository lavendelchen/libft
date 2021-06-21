/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:38:14 by shaas             #+#    #+#             */
/*   Updated: 2021/06/21 20:16:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	num;

	num = 0;
	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}

size_t	ft_strlcpy(char* dst, const char* src, size_t dstsize)
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
	return(ret);
}

int	main()
{
	char dst[] = "hewoo";
	char src[] = "goo";
	char dst2[] = "hewoo";
	char src2[] = "goo";

	printf("strlcpy: %s, %s, ft_strlcpy: %zu, %s", strncpy(dst, src, 9), dst, ft_strlcpy(dst2, src2, 6), dst2);
}
