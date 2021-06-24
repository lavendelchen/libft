/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:57:10 by shaas             #+#    #+#             */
/*   Updated: 2021/06/24 18:10:45 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c = c + 32;
	return (c);
}

int	main(void)
{
	int	c = 70;

	printf("ft: %c, %c\n", ft_tolower(c), c);
	printf("not ft: %c, %c\n", tolower(c), c);
}
