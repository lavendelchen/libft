/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:45:35 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:27:26 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*un_s1;
	const unsigned char	*un_s2;

	un_s1 = (const unsigned char *)s1;
	un_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*un_s1 != *un_s2)
			return (*un_s1 - *un_s2);
		if (*un_s1 == '\0' && *un_s2 == '\0')
			return (0);
		un_s1++;
		un_s2++;
		i++;
	}
	return (0);
}
