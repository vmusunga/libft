/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:23:04 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/08 15:23:12 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)s)[i] = '\0';
        i++;
    }
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str,7);
   puts(str);
   
   return(0);
}