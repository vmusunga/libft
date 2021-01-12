/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:48:33 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 19:08:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t i;
	size_t x;

	x = 0;
	i = 0;
	if(!(new = malloc(sizeof(char) * len)))
		return (0);
	while (x < len && s[start])
		new[x++] = s[start++];
	new[x] = '\0';
	return (new);
}

int main()
{
	char *ptr = "123456789";
	printf("%s", ft_substr(ptr, 3, 6));
	return (0);
}