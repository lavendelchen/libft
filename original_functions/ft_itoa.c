/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:36:26 by shaas             #+#    #+#             */
/*   Updated: 2021/07/07 14:55:37 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


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

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy == NULL)
		return (cpy);
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}


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

static int	ft_assign(int n, char *nbr, int i)
{
	if (n == -2147483648)
	{
		nbr = ft_memmove(nbr, "-2147483648", 12);
		return (11);
	}
	else if (n < 0)
	{
		nbr[i] = '-';
		i++;
		n = n * -1;
		i = ft_assign(n, nbr, i);
	}
	else if (n >= 10)
	{
		i = ft_assign((n / 10), nbr, i);
		i = ft_assign((n % 10), nbr, i);
	}
	else
	{
		nbr[i] = n + '0';
		i++;
		return (i);
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	nbr[12];
	int		i;
	char	*str;

	i = 0;
	i = ft_assign(n, nbr, i);
	nbr[i] = '\0';
	str = ft_strdup(nbr);
	return (str);
}

int	main(void)
{
	int		n = -2147483648;
	char	*nbr;

	nbr = ft_itoa(n);
	printf("itoa:  %s\n", nbr);
	free (nbr);
	return (0);
}
