/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:46:26 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 14:47:39 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countw(char const *str, char c)
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

int		ft_len(char const *str, char c)
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

char	**ft_split(char const *s, char c)
{
	char **dest;
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	if (!(dest = malloc(sizeof(char**) * (ft_countw(s, c) + 1))))
		return (0);
	while (x < ft_countw(s, c))
	{
		y = 0;
		if (!(dest[x] = malloc(sizeof(char*) * (ft_len(&s[i], c) + 1))))
			return (0);
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

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char **test;
	char *str = "abc-defgh-ijkl-m";
	char sep = '-';
	int x;
	int i;

	i = 0;
	x = 0;
	test = ft_split(str, sep);
	while (test[x])
	{
		ft_putstr(test[x]);
		write(1, "\n", 1);
		x++;
	}
	return(0);
}