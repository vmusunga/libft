/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:53:55 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/08 15:22:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    
     if ((c <= 'z' && c >= 'a') || (c <= '9' && c >= '0')
                                || (c <= 'Z' && c >= 'A'))
        return (1);
    else
        return (0);
}

int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalnum(c));

    c='5';
    printf("\nResult when number character is passed: %d", ft_isalnum(c));

    return 0;
}