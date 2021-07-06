/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:36:26 by shaas             #+#    #+#             */
/*   Updated: 2021/07/06 19:03:24 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_assign(int n, char *nbr, int i)
{
	if (n == -2147483648)
		nbr = ft_strdup("-2147483648");
	else if (n < 0)
	{
		nbr[i] = '-';
		i++;
		n = n * -1;
		ft_assign(n, nbr, i);
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
	char	nbr[11];
	int		i;

	i = 0;
	i = ft_assign(n, nbr, i);
	nbr[i] = '\0';
	
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
