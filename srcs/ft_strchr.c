/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:29:02 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 15:08:08 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == '\0')
    {
        while (s[i])
            i++;
        return (&((char *)s)[i]);
    }
    while (s[i] != ((char)c) && s[i])
        i++;
    if (s[i] == ((char)c))
        return (&((char *)s)[i]);
    return (0);
}

int main () 
{
   const char str[] = "http://www.tutorialspoint.com\0ugyb";
   const char ch = '\0';
   char *ret;


   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}