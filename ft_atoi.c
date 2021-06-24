/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 13:05:26 by shaas             #+#    #+#             */
/*   Updated: 2021/06/24 15:52:02 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static int	ft_convert(char nbr[11], int sign)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (nbr[i] != '\0')
	{
		value = value * 10;
		value = value + (nbr[i] - '0');
		i++;
	}
	sign = sign % 2;
	if (sign == 1)
		value = value * (-1);
	return (value);
}

static int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int count;

	i = 0;
	count = 0;
	sign = 1;
	while (ft_whitespace(*str) == 1)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10;
		i = i + (*str - '0');
		str++;
	}
	i = i * sign;
	return (i);
}

int	main(void)
{
	char	str[] = "   -2147483648whefiuhwef"; //returns 0 if before the number there's

	printf("ft_atoi: %d, %s\natoi: %d, %s", ft_atoi(str), str, atoi(str), str);
	return (0);
}
