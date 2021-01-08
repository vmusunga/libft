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
#include <libft.h>

int     ft_strncmp(char *s1, char *s2, int len)
{
    int i;
    
    i = 0;
    if (size == 0)
        return (0);
    while (i < len - 1)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    i++;
    }
    return (s1 - s2);
}

int main()
{
    char *x;
    char *y;
    x = "00";
    y = "10";
    printf("%d\n", ft_strncmp(x,y,3));
    printf("%d\n", strncmp(x,y,3));
    return (0);
}