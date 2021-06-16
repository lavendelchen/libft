/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:22:37 by shaas             #+#    #+#             */
/*   Updated: 2021/06/16 17:13:12 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// shit's weird man, i need help tomorrow to understand this function

#include <stdio.h>
#include <string.h>

//void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)




int	main(void)
{
	int	src[] = {1, 2, 3, 500};
	char	dst[] = "i need a greeting";

	memcpy(dst, src, 7);
	printf("%s", dst);
}
