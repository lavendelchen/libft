/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:14:11 by shaas             #+#    #+#             */
/*   Updated: 2021/06/16 16:03:59 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not done!! main & headers need to go
// halb ungeklaert: what about if size_t > string. wahrscheinlich nicht relevant

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*char_b;
	void	*start_b;

	start_b = b;
	i = 0;
	while (i < len)
	{
		char_b = (char *)b;
		*char_b = c;
		b++;
		i++;
	}
	b = start_b;
	return (b);
}

int	main(void)
{
	char	str1[6] = "hello";
	char	str2[6] = "hello";

	printf("pro_memset():  %s\n", memset(str1, 78, 8));
	printf("ft_memset():  %s", ft_memset(str2, 78, 8));
	return (0);
}
