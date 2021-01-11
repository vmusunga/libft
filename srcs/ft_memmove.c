/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:16:46 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 17:37:36 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
         i++;
    }
    return (dst);
}