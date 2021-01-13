/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:16:46 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/13 16:11:22 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char temp;

	i = 0;
	if (((char*)dst) == 0 && ((char*)src) == 0)
		return (0);
	if (((char*)dst) > ((char*)src))
	{
	
	}
	else
	{
		while (i < len)
		{
			temp = ((char*)src)[i];
			((char*)dst)[i] = temp;
			i++;
		}
	}
	return (dst);
}
/*
int main () 
{
   char dest[] = "0xF0";
   const char src[]  = "this is a good nyancat ! \r\n";

   //printf("Before memmove dest = %s, src = %s\n", dest, src);
   printf("%s\n",ft_memmove(dest, src, 33));

   return(0);
}

//thi\xffs i\xfas \0 g\xde\xadood \0nyan\0cat\0 !\r\n*/