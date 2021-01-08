/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 15:56:45 by vmusunga          #+#    #+#             */
/*   Updated: 2020/10/14 16:01:00 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int    ft_strlcat(char *src, char *dst, int size)
{
    int i;
    int x;
    int y;
    
    x = ft_strlen(dst);
    y = ft_strlen(src);
    i = 0;
    if (size == 0)
        return (y);
    if (size < x)
        return (size + y);
    while (x + i < size - 1)
    {
        dst[x + i] = src[i];
        i++;
    }
    dst[x + i] = '\0';
    return (x + y);
}