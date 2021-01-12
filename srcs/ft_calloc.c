/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:21:00 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 19:28:29 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	char *x;

	i = 0;
	if(!(x = malloc(size * count)))
		return (0);
	while (i < count * size)
	{
		x[i] = 0;
		i++;
	}
	return (((void *)x));
}