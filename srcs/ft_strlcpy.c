/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 15:56:45 by vmusunga          #+#    #+#             */
/*   Updated: 2020/10/14 16:01:00 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void    ft_strlcpy(char *src, char *dst, int size)
{
    int i;

    i = 0;
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

void    ft_putstr(char *str)
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
    char dst[3];
    int size = 4;

    ft_strlcpy(src, dst, size);
    ft_putstr(dst);
    //write(1, "\n", 1);
    //strlcpy(src, dst, size);
    return (0);
}