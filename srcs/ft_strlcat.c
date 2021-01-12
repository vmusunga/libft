/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:37:44 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 12:08:41 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	int i;
	int x;
	int y;

	x = ft_strlen(dst);
	y = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (y);
	if (size < x)
		return (size + y);
	while (src[i] && (x + i < size - 1))
	{
		dst[x + i] = src[i];
		i++;
	}
	dst[x + i] = '\0';
	return (x + y);
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}