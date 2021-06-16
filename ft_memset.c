/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:14:11 by shaas             #+#    #+#             */
/*   Updated: 2021/06/16 13:03:49 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// try stuff out with other kinds of arrays, pointer stuff 
// since it's always gonna be converted to an unsigned char, an ascii character,
// that means that the bytesize of one char is always 1 byte.
// that means that len is always not only the number of bytes to be exchanged,
// but also the number of characters.

#include <stdio.h>
#include <string.h>
  
void*   ft_memset(void* b, int c, size_t len)
{
    size_t i;
    char* charb;
    void* startb;

    startb = b;
    i = 0;
    while(i < len)
    {
        charb = (char*)b;
        *charb = c;
        b++;
        i++;
    }
    b = startb;
    return b;
}

int main()
{
    char str1[50] = "I really like sweet stuff";
    char str2[50] = "I really like sweet stuff";

    printf("hi_memset():  %s\n", memset(str1, 78, 8));
    printf("ft_memset():  %s", ft_memset(str2, 78, 8));
    return 0;
}
