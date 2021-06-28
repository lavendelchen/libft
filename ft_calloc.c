/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:59:10 by shaas             #+#    #+#             */
/*   Updated: 2021/06/28 18:56:07 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	ptr_size;
	size_t	i;

	ptr_size = size * count;
	i = 0;
	ptr = (char *)malloc(ptr_size);
	if (ptr == NULL)
		return (ptr);
	while (i < ptr_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
