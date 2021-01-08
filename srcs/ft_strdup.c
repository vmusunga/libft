/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:24:26 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/08 15:42:14 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *str)
{
    int x;

    x = 0;
    while (str[x])
        x++;
    return (x);
}

char    *ft_strdup(const char *s1)
{
    int i;
    char *cpy;
    size_t len;

    len = ft_strlen(s1);
    i = 0;
    if (!(cpy = malloc(sizeof(const char) * (len + 1))))
        return (0);
    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}

int main()
{
    const char *ptr = "brrt";
    printf("%s\n",ft_strdup(ptr));
    return (0);
}