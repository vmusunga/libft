/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:16:46 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 19:32:37 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char temp[len];

	i = 0;
	while (i < len)
	{
		temp[i] = ((char*)src)[i];
		((char*)dst)[i] = temp[i];
		i++;
	}

	return (dst);
}