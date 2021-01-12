/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:38:51 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 12:23:55 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;

	i = 0;
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
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
	char *src = "abc";
	char dst[10];
	int size = 4;

	ft_strlcpy(dst, src, size);
	ft_putstr(dst);
	write(1, "\n", 1);
	return (0);
}