/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:14:11 by shaas             #+#    #+#             */
/*   Updated: 2021/06/22 20:16:00 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//not done!! main & headers need to go
// halb ungeklaert: what about if size_t > string. wahrscheinlich nicht relevant
// testt all this shit with to be downloaded tester

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*char_b;
	unsigned char	*start_b;

	start_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		char_b = (unsigned char *)b;
		*char_b = (unsigned char)c;
		b++;
		i++;
	}
	b = start_b;
	return (b);
}

int	main(void)
{
	char	str2[20] = "he⬇️lo";
	char	str1[20] = "he⬇️lo";

	printf("pro_memset():  %s\n", memset(str1, 78, 5));
	printf("ft_memset():  %s", ft_memset(str2, 78, 5));
	return (0);
}
