/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:36:26 by shaas             #+#    #+#             */
/*   Updated: 2021/07/07 15:39:33 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
