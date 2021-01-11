/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 12:20:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 10:58:20 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr (const char *haystack, const char *needle, size_t size)
{
    size_t i;
    size_t x;

    x = 0;
    i = 0;
    if (needle[0] == '\0')
        return (haystack);
    while (haystack[i])
    {
        x = 0;
        while (haystack[i + x] == needle[x] && x < size - 1)
        {
            if (x + 1 == '\0')
                return (&haystack[i]);
            x++;
        }
        i++;
    }
    return (0);
}

int main()
{
    int i;
    char *x;
    char *y;
    char *ptr;

    i = 0;
    x = "idlfsabclsf";
    y = "abc";
    ptr = ft_strnstr(x,y,3);
    printf("%s\n", ptr);
    return (0);
}