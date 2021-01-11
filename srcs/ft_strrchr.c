/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:40:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 15:50:56 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;


   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}