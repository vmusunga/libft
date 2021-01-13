/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:40:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/13 14:46:56 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	if (c == '\0')
		return (&((char *)s)[len]);
	i = len - 1;
	while (s[i] != ((char)c) && s[i])
		i--;
	if (s[i] == ((char)c))
		return (&((char *)s)[i]);
	return (0);
}
