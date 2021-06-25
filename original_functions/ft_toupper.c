/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:09:25 by shaas             #+#    #+#             */
/*   Updated: 2021/06/24 18:06:51 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c = c - 32;
	return (c);
}

int	main(void)
{
	printf("ft: %c, %c\n", ft_toupper(10), 10);
	printf(": %c, %c\n", toupper(10), 10);
}