/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:56:29 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 17:37:33 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return x;
}

char	*ft_strjoin(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int x;
	char *dest;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(dest = malloc(sizeof(char) * (len1 + len2 + 2))))
		return(0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	x = 0;
	while (s2[x])
	{
		dest[i + x] = s2[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}