/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_von_basti.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:03:00 by sachmull          #+#    #+#             */
/*   Updated: 2021/06/16 13:05:41 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <libc.h>

int test_memset();
int test_bzero();
void print_as_dec(char *str, int len);
int    test_memcpy();
int    test_memccpy();
int    test_memmove();

int main()
{
    printf("ft_memset:    %d\n", test_memset());
    printf("ft_bzero:    %d\n", test_bzero());
    printf("ft_memcpy:    %d\n", test_memcpy());
    printf("ft_memccpy:    %d\n", test_memccpy());
    printf("ft_memmove:    %d\n", test_memmove());
    return (0);
}

int test_memset()
{
    char str[50];
    void *result;

    strcpy(str, "abcdefgh\0");
    result = ft_memset(str, 65, 3);

    if (strcmp(str, "AAAdefgh\0") == 0 && str == result)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int test_bzero()
{
    char str[50];

    strcpy(str, "Hello World!");
    ft_bzero(str, 3);
    
    if (memcmp(str, "\0\0\0lo World!", 13) == 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int    test_memcpy()
{
    char    dest[50];
    char    src[50];
    char    *result;

    strcpy(src, "Hello World!");
    strcpy(dest, "0123456789");

    result = ft_memcpy(dest, src, 5);

    if (strcmp(dest, "Hello56789") == 0 && dest == result)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int    test_memccpy()
{
    char    dest[50];
    char    src[50];
    char    *result;

    // Test finding char
    strcpy(dest, "ROSANA");
    strcpy(src, "SAUCE");

    result = ft_memccpy(dest, src, 65, 10);
    if (strcmp(dest, "SASANA") == 0 && result == &(dest[2]))
    {
        //
    }
    else
    {
        return (0);
    }

    // Test char not found
    memset(dest, 0, 50);
    memset(src, 0, 50);
    strcpy(dest, "ROSANA");
    strcpy(src, "ZZZZ");

    result = ft_memccpy(dest, src, 65, 5);
    if (strcmp(dest, "ZZZZ") == 0 && result == NULL)
    {
        //
    }
    else
    {
        return (0);
    }

    // Test char not found and copying n bytes
    memset(dest, 0, 50);
    memset(src, 0, 50);
    strcpy(dest, "ROSANA");
    strcpy(src, "ZZZZ");

    result = ft_memccpy(dest, src, 65, 2);
    if (strcmp(dest, "ZZSANA") == 0 && result == NULL)
    {
        //
    }
    else
    {
        return (0);
    }

    return (1);
}

int    test_memmove()
{
    char str[10];
    char *src;
    char *dst;

    // Test overlapping, src is left
    strcpy(str, "123456789");
    src = str;
    dst = str + 3;
    ft_memmove(dst, src, 4);
    if (strcmp(str, "123123489") == 0)
    {
        //
    }
    else
    {
        return (0);
    }

    // Test overlapping, src is right
    memset(str, 0, 10);
    strcpy(str, "123456789");
    src = str + 3;
    dst = str;
    ft_memmove(dst, src, 4);
    if (strcmp(str, "456756789") == 0)
    {
        //
    }
    else
    {
        return (0);
    }
    return 1;
}