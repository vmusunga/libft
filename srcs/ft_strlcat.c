/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:37:44 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 10:47:54 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t x;
	size_t y;

	x = ft_strlen(dst);
	y = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (y);
	if (size < x)
		return (size + y);
	while (src[i] && (x + i < size - 1))
	{
		dst[x + i] = src[i];
		i++;
	}
	dst[x + i] = '\0';
	return (x + y);
}
