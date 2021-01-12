/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:28:41 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/12 11:29:26 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	
	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

int main () {
	char str[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	ft_memset(str,'$',7);
	puts(str);
	
	return(0);
}