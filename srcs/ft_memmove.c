/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:16:46 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/13 12:23:32 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char temp;

	i = 0;
	if (((char*)dst) == 0 && ((char*)src) == 0)
		return (0);
	if (((char*)dst) > ((char*)src))
	{
		
	}
	else
	{
		while (i < len)
		{
			temp = ((char*)src)[i];
			((char*)dst)[i] = temp;
			i++;
		}
	}
	return (dst);
}
