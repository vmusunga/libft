/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:48:33 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/14 12:00:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;
	size_t x;

	x = 0;
	i = 0;
	if ((!s))
		return (NULL);
	if (start >= len)
		len = 0;
	if(!(new = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (x < len)
		new[x++] = s[start++];
	new[x] = '\0';
	return (new);
}
