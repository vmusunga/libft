/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 12:20:45 by vmusunga          #+#    #+#             */
/*   Updated: 2020/10/14 16:01:00 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strnstr (char *haystack, char *needle, int size)
{
    int i;
    int x;

    x = 0;
    i = 0;
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
    if (needle[0] == '\0')
        return (haystack);
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