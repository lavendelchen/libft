/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:38:14 by shaas             #+#    #+#             */
/*   Updated: 2021/06/16 11:41:17 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  strlcpy(char* restrict dst, const char* restrict src, size_t dstsize)
{
    int i;

    i = 0;
    while (i < dstsize)
    {
        *dst = *src 
    }
}

int     main()
{
    char dst[] = "hello";
    char src[] = "goodbye";

    strlcpy(dst, src, )
}