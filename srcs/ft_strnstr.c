/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:41:46 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 12:22:08 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t i;
	size_t x;

	x = 0;
	i = 0;
	if (needle[0] == '\0')
		return (((char*)haystack));
	while (haystack[i])
	{
		x = 0;
		while (haystack[i + x] == needle[x] && x < size - 1)
		{
			if (needle[x + 1] == '\0')
				return (&((char*)haystack)[i]);
			x++;
		}
		i++;
	}
	return (0);
}

int main()
{
	int i;
	char *x;
	char *y;
	char *ptr;

	i = 0;
	x = "";
	y = "-";
	ptr = ft_strnstr(x,y,4);
	printf("%s\n", ptr);
	return (0);
}