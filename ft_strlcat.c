/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:37:50 by shaas             #+#    #+#             */
/*   Updated: 2021/06/22 17:13:33 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//aufpassen: was nicht im man steht: der return value istweird, wenn naemlich
//dest laenger ist als dstsize, dann tun die trotzdem so als waer es nur so kurz
//
//also: for strlcat, your string basically has to be bigger than what's standing
//in it initially. that's teh buffer. because the string has to be able to carry
//both src and dst. so if you made the string like  tht: "char dst[]", it would
//not be able to carry anything over. so dstsize will be the size of the buffer,
//which ironically doesn't have to do much with the size of the initial dst string.
//so, in a nutshell:
//buffer / array: the whole thing, it will carry dst and src
//dstsize: size of that buffer
//dst / dst string: the string that's standing in the buffer. null terminated.
//to append something, has to be short er than dstsize.

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s) // ft_strlen doesn't have the terminating null byte!!! (its confusing because you start counting at 0)
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

int	main(void)
{
	char	dst[20] = "hewoo";
	char	src[] = "gooikuhiugigiugiugiu";
	char	dst2[20] = "hewoo";
	char	src2[] = "gooikuhiugigiugiugiu";

	printf("strlcat: %zu, %s, ft_strlcat: %zu, %s", strlcat(dst, src, 20), dst, ft_strlcat(dst2, src2, 20), dst2);
}
