/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:14:11 by shaas             #+#    #+#             */
/*   Updated: 2021/06/16 16:37:14 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

//headers & main gone

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	while (i < n)
	{
		char_s = (char *)s;
		*char_s = '\0';
		s++;
		i++;
	}
}

int	main(void)
{
	char	str1[12] = "sweet stuff";
	char	str2[12] = "sweet stuff";

	char *str1_rep = str1;
	char *str2_rep = str2;
	int i = 0;

	bzero(str1, 3);
	ft_bzero(str2, 3);

	while (i <= 6)
	{
		if (*str1_rep == '\0')
			*str1_rep = '0';
		if (*str2_rep == '\0')
			*str2_rep = '0';
		str1_rep++;
		str2_rep++;
		i++;
	}
	printf("pro_bzero():  %s\n", str1);
	printf("ft_bzero():  %s", str2);
	return (0);
}
