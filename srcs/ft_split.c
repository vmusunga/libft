/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:46:26 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 11:58:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_countw(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return(count);
}

static int	ft_len(char const *str, char c)
{
	int x;
	int i;

	i = 0;
	x = 0;
	if (str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		i++;
		x++;
	}
	return(x);
}

static char	**ft_free(char **tab, int x)
{
	int i;

	i = 0;
	while (i < x && tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char **dest;
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	if ((!s))
		return(NULL);
	if (!(dest = malloc(sizeof(char**) * (ft_countw(s, c) + 1))))
		return (NULL);
	while (x < ft_countw(s, c))
	{
		y = 0;
		if (!(dest[x] = malloc(sizeof(char*) * (ft_len(&s[i], c) + 1))))
			return (ft_free(dest, x));
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			dest[x][y] = s[i];
			i++;
			y++;
		}
		dest[x][y] = '\0';
		x++;
	}
	dest[x] = 0;
	return (dest);
}
