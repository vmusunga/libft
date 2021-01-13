/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:56:29 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/13 17:14:50 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlen(const char *str);

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
		return(NULL);
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