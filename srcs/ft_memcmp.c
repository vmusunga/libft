/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:26:23 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 19:31:55 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
		
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && ((const char*)s1)[i] && ((const char*)s2)[i])
	{
		if (((const char*)s1)[i] != ((const char*)s2)[i])
			return (((const char*)s1)[i] - ((const char*)s2)[i]);
		i++;
	}
	return (((const char*)s1)[i] - ((const char*)s2)[i]);
}