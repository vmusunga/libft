/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:47:19 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 17:37:32 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t  ft_strlcat(char *restrict src, const char *restrict dst, size_t size)
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

int main()
{
    
}