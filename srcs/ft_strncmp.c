/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:40:33 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 11:40:53 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1 && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *x;
	char *y;
	x = "aAaa";
	y = " A";
	printf("%d\n", ft_strncmp(x,y,3));
	printf("%d\n", strncmp(x,y,3));
	return (0);
}